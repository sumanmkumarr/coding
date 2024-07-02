from socket import socket, AF_INET, SOCK_STREAM
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP

# Generate server's public and private keys
server_key = RSA.generate(2048)
server_public_key = server_key.publickey().export_key()
server_private_key = server_key.export_key()

# Server configuration
HOST = '127.0.0.1'
PORT = 12345

# Function to decrypt received message using server's private key
def decrypt_message(encrypted_message):
    cipher_rsa = PKCS1_OAEP.new(server_key)
    decrypted_message = cipher_rsa.decrypt(encrypted_message)
    return decrypted_message

# Server setup
server_socket = socket(AF_INET, SOCK_STREAM)
server_socket.bind((HOST, PORT))
server_socket.listen(1)

print("Server is listening...")

# Accept incoming connection
connection, addr = server_socket.accept()
print(f"Connection from {addr}")

# Send server's public key to client
connection.send(server_public_key)

# Receive encrypted message from client
encrypted_message = connection.recv(4096)

# Decrypt message
decrypted_message = decrypt_message(encrypted_message)
print("Received message:", decrypted_message.decode())

# Close connection
connection.close()
server_socket.close()
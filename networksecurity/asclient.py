from socket import socket, AF_INET, SOCK_STREAM
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP

# Client configuration
HOST = '127.0.0.1'
PORT = 12345

# Function to encrypt message using server's public key
def encrypt_message(message, public_key):
    rsa_key = RSA.import_key(public_key)
    cipher_rsa = PKCS1_OAEP.new(rsa_key)
    encrypted_message = cipher_rsa.encrypt(message.encode())
    return encrypted_message

# Client setup
client_socket = socket(AF_INET, SOCK_STREAM)
client_socket.connect((HOST, PORT))

# Receive server's public key
server_public_key = client_socket.recv(4096)

# Send encrypted message to server
message = "Hello, Server!"
encrypted_message = encrypt_message(message, server_public_key)
client_socket.send(encrypted_message)

# Close connection
client_socket.close()
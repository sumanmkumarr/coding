import hmac
import hashlib

def generate_mac(key, message):
  
    if isinstance(key, str):
        key = key.encode()
    if isinstance(message, str):
        message = message.encode()
 
    mac = hmac.new(key, message, hashlib.sha256)
 
    return mac.hexdigest()

key = "secret_key"
message = "Hello, world!"

mac = generate_mac(key, message)
print("Generated MAC:", mac)

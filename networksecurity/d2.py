from py_ecc.bls.ciphersuites import G2ProofOfPossession as bls_pop

# Simulating multiple clients with their private keys
private_key1 = 5566
private_key2 = 1234

# Generate public keys for each client
public_key1 = bls_pop.SkToPk(private_key1)
public_key2 = bls_pop.SkToPk(private_key2)

# Message to be signed
message = b'abc' * 32

# Client 1: Signing the message
signature1 = bls_pop.Sign(private_key1, message)

# Client 2: Signing the same message
signature2 = bls_pop.Sign(private_key2, message)

# Verifying signatures
verification1 = bls_pop.Verify(public_key1, message, signature1)
verification2 = bls_pop.Verify(public_key2, message, signature2)

# Print results
print(f"Client 1 signature verified: {verification1}")
print(f"Client 2 signature verified: {verification2}")

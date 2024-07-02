from py_ecc.bls.ciphersuites import G2ProofOfPossession as bls_pop

private_key1 =123
private_key2=456

public_key1 = bls_pop.SkToPk(private_key1)
public_key2=bls_pop.SkToPk(private_key2)


message = b'live long and prosper suman kumar AP21110010283' * 32  


enc1 = bls_pop.Sign(private_key1, message)
enc2=bls_pop.Sign(private_key2,enc1)


dec1=bls_pop.Verify(public_key1,message,enc1)
dec2=bls_pop.Verify(public_key2,message,enc2)



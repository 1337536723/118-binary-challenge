#aarch64-linux-gnu-gcc -static mra.c -o mra_origin
mra = bytearray(open('./mra_origin', 'rb').read())
key = bytearray(open('./key', 'rb').read())
 
size = len(mra)
xor_array = bytearray(size)
 
for i in range(size):
	xor_array[i] = mra[i] ^ key[i % len(key)]
 
open('./mra', 'wb').write(xor_array)

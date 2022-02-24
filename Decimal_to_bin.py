def binary(N):
    bi = 0
    i = 0
    while(N!=0):
        bit = N & 1
        bi = bit * (10 **i) + bi
        N = N >> 1
        i += 1
    return bi

print(binary(int(input("Enter dec No : "))))

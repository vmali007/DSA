def decimal(n):
    dec = 0
    i = 0

    while( n != 0):

        digit = n % 10
        if( digit == 1):
            dec = dec + pow(2, i)

        n = n//10
        i += 1
    return dec

print(decimal(int(input("Enter dec No : "))))

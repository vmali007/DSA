def reverse(x: int) -> int:
    max_ = 1<<32 - 1
    min_ = -1*(1<<31)
    sign=[1,-1][x < 0]
    x = abs(x)
    rev = 0
    while x != 0:
        if rev > max_/10 or rev < min_/10:
            return 0
        rev = (x%10) + rev * 10
        x = x // 10


    return sign * rev

print(reverse(3466))
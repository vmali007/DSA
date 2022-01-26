def cntBits(A):
    ans=0
    for i in range(32):
        count_on=0
        for j in A:
            if j & (1 << i) != 0:
                count_on+=1
        count_off = len(A) - count_on
        ans += (count_on*count_off*2)
    return ans % 1000000007

A=[1, 3, 5]
print(cntBits(A))

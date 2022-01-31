
def reverse(N):
    rev = 0
    while(N>0):
        lb = (N & 1)
        rev = rev << 1
        rev |= lb
        N = N >> 1
    return rev

def solve(A):
    count=1 
    length=1
    while(count<A):
        length += 1
        elements=1<<((length-1)//2)
        count += elements
    count -= 1<<((length-1)//2)
    offset = A - count - 1

    ans = 1<<(length-1)

    ans |= offset<<(length//2)

    rev=reverse(ans>>(length//2))

    ans |= rev

    return ans
  
  inp = int(input())
  solve(inp)

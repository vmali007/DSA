def solve(A):
    count=0
    if A==0:
        return 1 
    while (A>0) :
        if A & 1:
            break
        A = A >> 1

        count += 1 
    return count
    
if __name__=='__main__':
    inp = int(input())
    solve(inp)

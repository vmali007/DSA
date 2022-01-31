def largest_power_of_2(n):
	x=0
  while((1<<x)<=n):
		x+=1
	return x-1

def solve_1(A):
	if A==0:
		return 0
	largest_power_2=largest_power_of_2(A)

	ans=((2**(largest_power_2-1))*largest_power_2)+(A-(2**largest_power_2)-1)+solve_1(A-(2**largest_power_2))

	return ans

def solve( A):
    return int(solve_1(A)%1000000007)

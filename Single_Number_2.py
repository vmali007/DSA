def singleNumber(A):
  temp_arr=[0]*32
  ans=0
  for i in A:
    temp=bin(i)[2:]
    for i in range(len(temp)):
      temp_arr[31-i]+=int(temp[len(temp)-1-i])
  for i in range(32):
    if temp_arr[i]%3!=0:
      ans = ans + 2**(31-i)
return ans

A = [1, 2, 4, 3, 3, 2, 2, 3, 1, 1]
singleNumber(A)

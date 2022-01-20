def numSetBits(A):
  count=0
  while A!=0:
    A=A&(A-1)
    count += 1
  return count

if __name__ == '__main__':
  inp = int(input())
  numSetBits(inp)

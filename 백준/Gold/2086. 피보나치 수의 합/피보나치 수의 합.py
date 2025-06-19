import sys
input=lambda:sys.stdin.readline().rstrip()
memory = {1:1,2:1,3:2,4:3,5:5}
def Fibo(n):
  if memory.get(n):
    return memory[n]
  else:
    if n%2 == 1:
      memory[n] = (Fibo(n//2)**2+Fibo(n//2+1)**2)%1000000000
    else:
      memory[n] = (Fibo(n+1)-Fibo(n-1))%1000000000
    return memory[n]
a,b = map(int,input().split())
print((Fibo(b+2)-Fibo(a+1))%1000000000)
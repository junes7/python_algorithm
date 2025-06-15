import sys,math
input=lambda:sys.stdin.readline().rstrip()
def isprime(n):
    if n==1:
        return False
    for i in range(2,int(math.sqrt(n)+1)):
        if n%i==0:
            return False
    return True
n=int(input())
while 1:
    if str(n)==str(n)[::-1] and isprime(n):
        print(n)
        break
    n+=1
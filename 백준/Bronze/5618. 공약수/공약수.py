import sys
input=lambda:sys.stdin.readline().rstrip()
n,rlt1,rlt2=int(input()),[],[]
arr=[*map(int,input().split())]
def gcd(x,y):
    return y if x%y==0 else gcd(y,x%y)
temp=arr[0]
for i in range(1,n):
    temp=gcd(temp,arr[i])
for i in range(1,int(temp**0.5)+1):
    if temp%i==0:
        rlt1+=[i]
        if i**2!=temp:
            rlt2+=[temp//i]
rlt1+=rlt2[::-1]
for i in rlt1:
    print(i)
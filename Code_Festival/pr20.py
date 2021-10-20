# quotient and remainder
# use list
n=list(map(int,input().split()))
result=n[0]//n[1]
left=n[0]%n[1]
print(result, left)
# use variable
a,b=map(int,input().split())
print(a//b, a%b)
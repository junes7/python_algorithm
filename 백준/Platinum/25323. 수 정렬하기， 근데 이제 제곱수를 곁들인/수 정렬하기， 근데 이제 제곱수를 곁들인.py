import sys,math
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
a=[*map(int,input().split())]
b=sorted(a.copy())
e=1
for i in range(n):
    if int(math.isqrt(a[i]*b[i]))**2==a[i]*b[i]:
        pass
    else:
        e=0
        break
print("YES" if e else "NO")
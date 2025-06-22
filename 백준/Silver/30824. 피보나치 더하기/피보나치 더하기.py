import sys
input=lambda:sys.stdin.readline().rstrip()
f=[0,1]
for i in range(2,79):
    f+=[f[i-1]+f[i-2]]
def solve(k,x):
    if k==1:
        for i in range(1,79):
            if f[i]==x: return True
    elif k==2:
        for i in range(1,79):
            for j in range(1,79):
                if f[i]+f[j]==x: return True
    else:
        for i in range(1,79):
            for j in range(1,79):
                for k in range(1,79):
                    if f[i]+f[j]+f[k]==x: return True
    return False
for _ in range(int(input())):
    k,x=map(int,input().split())
    print("YES" if solve(k,x) else "NO")
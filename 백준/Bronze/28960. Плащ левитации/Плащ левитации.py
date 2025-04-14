import sys
input=lambda:sys.stdin.readline().rstrip()
h,l,a,b=map(int,input().split())
check=False
if a<=l and b<=h*2 or b<=l and a<=h*2:
    check=True
print("YES" if check else "NO")
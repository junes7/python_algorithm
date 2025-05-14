import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    a=[*map(int,input().split())]
    if a[1]==0 and a[2]==0: break
    diff=a[1]-a[0] if a[1]-a[0]==a[2]-a[1] else a[1]//a[0]
    if a[1]-a[0]==a[2]-a[1]:
        print("AP", a[2]+diff)
    else:
        print("GP", a[2]*diff)
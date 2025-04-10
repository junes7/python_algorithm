import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    cnt=0
    arr=[*map(int,input().split())]
    for c in arr:
        if c>=10:
            cnt+=1
    print(*arr)
    if cnt==0:
        print("zilch")
    elif cnt==1:
        print("double")
    elif cnt==2:
        print("double-double")
    else:
        print("triple-double")
    print()
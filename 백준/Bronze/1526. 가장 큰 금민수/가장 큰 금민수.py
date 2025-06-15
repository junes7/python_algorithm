import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for i in range(n,3,-1):
    flag=True
    for c in str(i):
        if c!='4' and c!='7':
            flag=False
            break
    if flag:
        print(i)
        break
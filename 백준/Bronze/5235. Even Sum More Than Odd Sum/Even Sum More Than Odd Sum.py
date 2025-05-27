import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n,*arr=[*map(int,input().split())]
    total=[0]*2
    for c in arr:
        total[c%2]+=c
    print("TIE" if total[0]==total[1] else "EVEN" if total[0]>total[1] else "ODD")
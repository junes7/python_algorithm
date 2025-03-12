import sys
input=lambda:sys.stdin.readline().rstrip()
cnt=0
while True:
    n,*arr=map(int,input().split())
    if n==0: break
    cnt+=1
    print(f"Case {cnt:.0f}: Sorting... done!")
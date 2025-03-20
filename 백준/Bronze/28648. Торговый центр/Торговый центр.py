import sys
input=lambda:sys.stdin.readline().rstrip()
n,minn=int(input()),200
for _ in range(n):
    ti,li=map(int,input().split())
    if minn>ti+li:
        minn=ti+li
print(minn)
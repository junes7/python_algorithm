import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
st=""
for _ in range(3):
    arr=[*map(int,input().split())]
    if 7 in arr:
        st+=str(7)
print(st if len(st)==3 else 0)
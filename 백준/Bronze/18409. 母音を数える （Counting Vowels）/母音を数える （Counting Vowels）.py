import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
st=input()
cnt=0
for s in st:
    if s in ['a','e','i','o','u']:
        cnt+=1
print(cnt)
import sys
input=lambda:sys.stdin.readline().rstrip()
cnt=0
while True:
    t=input()
    if t=="": break
    cnt+=1
print(cnt)
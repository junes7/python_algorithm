import sys
input=lambda:sys.stdin.readline().rstrip()
x=int(input())
stick=[2**(6-i) for i in range(7)]
cnt=0
for i in range(len(stick)):
    if x>0 and x >= stick[i]:
        cnt += 1
        x -= stick[i]
print(cnt)
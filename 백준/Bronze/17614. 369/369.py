import sys
input=lambda:sys.stdin.readline().rstrip()
cnt=0
for i in range(3,int(input())+1):
    t=str(i)
    cnt+=t.count('3')+t.count('6')+t.count('9')
print(cnt)
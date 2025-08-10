import sys
input=lambda:sys.stdin.readline().rstrip()
n,st1,st2,cnt=int(input()),input(),input(),0
for i in range(n):
    if st1[i]==st2[i]:
        cnt+=1
print(cnt)
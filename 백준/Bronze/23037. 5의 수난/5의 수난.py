import sys
input=lambda:sys.stdin.readline().rstrip()
n,rlt=input(),0
for i in range(len(n)):
    rlt+=int(n[i])**5
print(rlt)
import sys
input=lambda:sys.stdin.readline().rstrip()
tar,st=list("ILOVEYONSEI"),input()
rlt=abs(ord(tar[0])-ord(st))
for i in range(1,len(tar)):
    rlt+=abs(ord(tar[i])-ord(tar[i-1]))
print(rlt)
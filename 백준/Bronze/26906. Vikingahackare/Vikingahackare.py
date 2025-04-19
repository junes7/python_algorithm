import sys
input=lambda:sys.stdin.readline().rstrip()
dic={}
for _ in range(int(input())):
     alpha,bina=input().split()
     dic[bina]=alpha
st,rlt=input(),""
for i in range(1,len(st)//4+1):
     rlt+=dic.get(st[4*(i-1):4*i],'?')
print(rlt)
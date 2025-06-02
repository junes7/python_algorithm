import sys
input=lambda:sys.stdin.readline().rstrip()
cnt=0
for i in range(1,int(input())+1):
    while i>0:
        if i%10==3 or i%10==6 or i%10==9:
            cnt+=1 
        i//=10
print(cnt)
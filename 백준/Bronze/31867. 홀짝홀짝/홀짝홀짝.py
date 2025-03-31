import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
k=input()
cnte,cnto=0,0
for i in range(n):
    if int(k[i])%2==0:
        cnte+=1
    elif int(k[i])%2!=0:
        cnto+=1
print(0 if cnte>cnto else 1 if cnte<cnto else -1)
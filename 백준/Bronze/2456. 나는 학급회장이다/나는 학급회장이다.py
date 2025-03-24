import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
total=[0]*3
squared=[0]*3
for i in range(n):
    arr=[*map(int,input().split())]
    for j in range(3):
        total[j]+=arr[j]
        squared[j]+=arr[j]**2
m=max(total)
if total.count(m)==1:
    for i in range(3):
        if total[i]==m:
            print(i+1,m)
            break
else:
    pow_m=max(squared)
    elected=0
    for i in range(3):
        if squared[i]==pow_m:
            elected=i;
            break;
    if squared.count(pow_m)>1:
        print(0,total[elected])
    else:
        print(elected+1,total[elected])
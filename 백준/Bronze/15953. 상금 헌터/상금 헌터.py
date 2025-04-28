import sys
input=lambda:sys.stdin.readline().rstrip()
arra,arrb=[],[]
s,m=1,1
for i in range(1,6+1):
    arra+=[[s,s+i]]
    s+=i
for i in range(5):
    arrb+=[[m,m+2**i]]
    m+=2**i
prizea=[5000000,3000000,2000000,500000,300000,100000]
prizeb=[5120000,2560000,1280000,640000,320000]
for _ in range(int(input())):
    a,b=map(int,input().split())
    total=0
    for i in range(len(arra)):
        if arra[i][0]<=a<arra[i][1]:
            total+=prizea[i]
            break
    for i in range(len(arrb)):
        if arrb[i][0]<=b<arrb[i][1]:
            total+=prizeb[i]
            break
    print(total)
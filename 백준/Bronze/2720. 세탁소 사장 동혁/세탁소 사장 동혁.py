n=int(input())
num=[[25,0],[10,0],[5,0],[1,0]]
for i in range(n):
    t=int(input())
    for j in range(len(num)):
        num[j][1]=t//num[j][0]
        t%=num[j][0]
    for i in range(len(num)):
        print(num[i][1],end=" ");
    print()
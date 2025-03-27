import sys
input=lambda:sys.stdin.readline().rstrip()
n,k=map(int,input().split())
g=[*map(int,input().split())]
rank=[]
for i in range(k):
    p=g[i]*100//n
    if p<=4:
        rank+=[1]
    elif 4<p<=11:
        rank+=[2]
    elif 11<p<=23:
        rank+=[3]
    elif 23<p<=40:
        rank+=[4]
    elif 40<p<=60:
        rank+=[5]
    elif 60<p<=77:
        rank+=[6]
    elif 77<p<=89:
        rank+=[7]
    elif 89<p<=96:
        rank+=[8]
    elif 96<p<=100:
        rank+=[9]
print(*rank)
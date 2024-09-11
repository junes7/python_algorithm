n=int(input())
l=list(map(int,input().split()))
t=[]
for i in range(n):
    t+=[l[i]/max(l)]
print(sum(t)/n*100)
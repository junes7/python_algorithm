n=int(input())
num_list=list(map(int,input().split()))
sum_list=sum(num_list)
res=0
for i in num_list:
    sum_list-=i
    res=(res+i*sum_list)%1000000007
print(res)
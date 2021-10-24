# get number of people into rides
total,count=0,0
l=int(input())
n=int(input())
for i in range(n):
    total+=int(input())
    if total <= l:
        count+=1
print(count)

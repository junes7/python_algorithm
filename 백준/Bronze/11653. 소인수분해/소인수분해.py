n=int(input())
d,t=2,[]
while n>1:
    if not n%d:
        n/=d
        t+=[d]
    else:
        d+=1
for i in t:
    print(i)
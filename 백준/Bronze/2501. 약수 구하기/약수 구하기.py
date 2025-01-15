a,b=map(int,input().split())
m,d=[1],2
while d<=a:
    if a%d==0 and d not in m: 
        m+=[d]
    d+=1
print(m[b-1] if len(m)>=b else 0)
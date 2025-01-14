s,n=input().split()
t,m,n=0,1,int(n)
for i in range(len(s)-1,-1,-1):
    if s[i].isalpha():
        t+=(ord(s[i])-65+10)*m
    else:
        t+=int(s[i])*m
    m*=n
print(t)
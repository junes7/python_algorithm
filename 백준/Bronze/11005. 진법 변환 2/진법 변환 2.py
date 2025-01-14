s,n=map(int,input().split())
t=""
while s>0:
    if s%n>=10:
        t+=chr((s%n)+55)
    else:
        t+=str(s%n)
    s//=n
print(t[::-1])
a,b=input().split()
k=len(b)-len(a)+1
min=len(a)
for i in range(0,k):
    c=0
    for j in range(i,(i+len(a))):
        if a[j-i]==b[j]: continue
        c+=1
    if min>c:
        min=c
print(min)
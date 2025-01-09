dice=list(map(int,input().split()))
a=dict()
for i in dice:
    a[i]=1 if i not in a else a[i]+1;

if len(a)==1:
    key=[k for k,v in a.items() if v==3]
    print(10000+key[0]*1000)
elif len(a)==2:
    key=[k for k,v in a.items() if v==2]
    print(1000+key[0]*100)
else:
    key=[k for k,v in a.items() if v==1]
    print(max(key)*100)
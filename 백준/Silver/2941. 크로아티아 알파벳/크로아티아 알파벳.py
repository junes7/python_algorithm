croaAlpha=["c=","c-","dz=","d-","lj","nj","s=","z="]
s,cnt=input(),0
while any(al in s for al in croaAlpha):
    for elem in croaAlpha:
        if elem in s:
            s=s[:s.find(elem)]+" "+s[s.index(elem)+len(elem):]
            cnt+=1
            break;
for i in s:
    if ord(i)>=97:
        cnt+=1
print(cnt)
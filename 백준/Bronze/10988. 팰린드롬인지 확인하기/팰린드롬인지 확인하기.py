ch=input()
l,r=len(ch),1
for i in range(0,l//2):
    if ch[i]!=ch[l-1-i]:
        r=0
        break
print(r)
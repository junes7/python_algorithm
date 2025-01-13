ch,num=input(),[0]*26
for i in range(len(ch)):
    if ch[i].isupper():
        num[ord(ch[i])-65]+=1
    elif ch[i].islower():
        num[ord(ch[i])-97]+=1
print("?" if num.count(max(num))>1 else chr(num.index(max(num))+65))
import sys
input=lambda:sys.stdin.readline().rstrip()
st,rlt=input(),""
for i in range(len(st)):
    if st[i].isupper():
        t=str(ord(st[i])-38)
        rlt+="0"+t if len(t)==1 else t
    elif st[i].islower():
        t=str(ord(st[i])-96)
        rlt+="0"+t if len(t)==1 else t
    elif st[i].isdigit():
        rlt+="#"+str(st[i])
    else:
        rlt+=st[i]
print(rlt)
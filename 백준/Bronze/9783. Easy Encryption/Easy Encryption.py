import sys
input=lambda:sys.stdin.readline().rstrip()
st,rlt=input(),""
for i in range(len(st)):
    if st[i].isupper():
        t=ord(st[i])-38
        rlt+="0"+str(t) if t<10 else str(t)
    elif st[i].islower():
        t=ord(st[i])-96
        rlt+="0"+str(t) if t<10 else str(t)
    elif st[i].isdigit():
        rlt+="#"+str(st[i])
    else:
        rlt+=st[i]
print(rlt)
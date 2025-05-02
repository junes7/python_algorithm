import sys
input=lambda:sys.stdin.readline().rstrip()
st=list(input())
for i in range(len(st)):
    if st[i].isupper():
        st[i]=chr(ord(st[i])+(-13 if ord(st[i])+13>90 else 13))
    elif st[i].islower():
        st[i]=chr(ord(st[i])+(-13 if ord(st[i])+13>122 else 13))
print(''.join(st))
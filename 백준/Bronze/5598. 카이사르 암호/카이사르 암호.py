import sys
input=lambda:sys.stdin.readline().rstrip()
st=[*input()]
for i in range(len(st)):
    if ord(st[i])<68:
        st[i]=chr(ord(st[i])+26-3)
    else:
        st[i]=chr(ord(st[i])-3)
print(''.join(st))
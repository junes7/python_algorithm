import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    st=[*input()]
    if 97<=ord(st[0])<=122:
        st[0]=chr(ord(st[0])-32)
    print(''.join(st))
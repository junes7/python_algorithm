import sys
input=lambda:sys.stdin.readline().rstrip()
st=input()
print(int(st,16) if st[1]=='x' else int(st,8) if st[0]=='0' else int(st))
import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    t=input()
    st=sorted([*input()],reverse=True)
    print(int(''.join(st[:-1]))+int(st[-1]))
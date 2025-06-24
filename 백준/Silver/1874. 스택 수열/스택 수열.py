import sys
input=lambda:sys.stdin.readline().rstrip()
cnt,stack,op=1,[],[]
for _ in range(int(input())):
    n=int(input())
    while cnt<=n:
        stack.append(cnt)
        op.append('+')
        cnt+=1
    if stack[-1]==n:
        stack.pop()
        op.append('-')
    else:
        break
if stack:
    print('NO')
else:
    for c in op:
        print(c)
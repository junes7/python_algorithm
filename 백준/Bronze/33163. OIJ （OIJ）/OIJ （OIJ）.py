import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
st=list(input())
repl={'O':'I','J':'O','I':'J'}
for i in range(n):
    st[i]=repl[st[i]]
print(''.join(st))
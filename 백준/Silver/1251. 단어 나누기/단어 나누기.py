import sys
input=lambda:sys.stdin.readline().rstrip()
st=input()
l,temp=len(st),[]
for i in range(1,l-1):
    for j in range(i+1,l):
        a=''.join(reversed(st[:i]))
        b=''.join(reversed(st[i:j]))
        c=''.join(reversed(st[j:]))
        temp.append(a+b+c)
print(sorted(temp)[0])
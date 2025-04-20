import sys
input=lambda:sys.stdin.readline().rstrip()
w=input()
m=int(input())
s=input().split()
cnt=0
for c in s:
    if len(c)<len(w):
        continue
    else:
        l=len(c)-len(w)+1
        for j in range(l):
            if c[j:j+len(w)]==w:
                cnt+=1
print(cnt)
import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
comb=[]
for i in range(n):
    for j in range(n):
        if i!=j:
            comb+=[(i,j)]
print(len(comb))
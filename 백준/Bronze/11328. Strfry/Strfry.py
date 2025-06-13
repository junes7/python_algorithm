import sys
input=lambda:sys.stdin.readline().rstrip()
for i in range(int(input())):
    a,b = map(sorted,list(input().split()))
    print(['Impossible','Possible'][a==b])
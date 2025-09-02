import sys
input=lambda:sys.stdin.readline().rstrip()
a = int(input())
for i in range(a):
    b = list(map(str, input().split()))
    if b[0] == 'Simon' and b[1] == 'says':
        print(""," ".join(map(str, b[2:])))
    else:
        continue
import sys
input=lambda:sys.stdin.readline().rstrip()
p,k = map(int, input().split())
for i in range(2, k):
    if p % i == 0:
        print("BAD", i)
        exit(0)
print("GOOD")
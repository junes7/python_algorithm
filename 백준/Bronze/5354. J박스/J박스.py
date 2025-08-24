import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n=int(input())
    for i in range(n):
        print('#'+('J' if 1<=i<=n-2 else '#')*(n-2)+('#' if n>1 else ''))
    print()
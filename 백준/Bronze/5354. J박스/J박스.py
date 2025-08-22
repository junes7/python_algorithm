import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n=int(input())
    for i in range(n):
        if n<3:
            print('#'*n)
        else:
            print('#'+('J' if 1<=i<=n-2 else '#')*(n-2)+'#')
    print()
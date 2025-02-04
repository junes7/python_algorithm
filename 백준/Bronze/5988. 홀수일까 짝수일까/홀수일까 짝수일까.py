import sys
n=int(sys.stdin.readline().rstrip())
for i in range(n):
    a=int(sys.stdin.readline().rstrip())
    print("even" if a%2==0 else "odd")
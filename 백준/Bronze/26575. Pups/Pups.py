import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    d,f,p=map(float,input().split())
    print(f"${d*f*p:.2f}")
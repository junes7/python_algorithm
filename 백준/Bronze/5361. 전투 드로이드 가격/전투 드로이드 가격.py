import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    a,b,c,d,e=map(int,input().split())
    print(f"${a*350.34+b*230.90+c*190.55+d*125.30+e*180.90:.2f}")
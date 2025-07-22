import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    l,d=input().split('-')
    n,s=int(d),0
    for i in range(3):
        s+=(ord(l[i])-65)*26**(2-i)
    print("nice" if abs(s-n)<=100 else "not nice")
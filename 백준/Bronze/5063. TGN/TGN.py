import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    r,e,c=map(int,input().split())
    print("does not matter" if e-r==c else "advertise" if e-r>c else "do not advertise")
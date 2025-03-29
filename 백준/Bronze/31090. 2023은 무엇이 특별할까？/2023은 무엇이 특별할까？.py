import sys
input=lambda:sys.stdin.readline().rstrip()
t=int(input())
for _ in range(t):
    st=input()
    n=int(st[-2:])
    print("Good" if (int(st)+1)%n==0 else "Bye")
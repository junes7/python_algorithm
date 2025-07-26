import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    st=input()
    n=len(st)
    print("Do-it" if st[n//2-1]==st[n//2] else "Do-it-Not")
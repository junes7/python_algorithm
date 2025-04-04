import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
print("NEWBIE!" if m<=2 else "OLDBIE!" if m<=n else "TLE!")
import sys
input=lambda:sys.stdin.readline().rstrip()
p1,s1=map(int,input().split())
s2,p2=map(int,input().split())
pt,st=p1+p2,s1+s2
if pt==st:
    print("Penalty" if s1==p2 else "Esteghlal" if s1>p2  else "Persepolis")
else:
    print("Esteghlal" if st>pt  else "Persepolis") 
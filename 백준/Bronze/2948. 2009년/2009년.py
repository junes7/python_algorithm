import sys
input=lambda:sys.stdin.readline().rstrip()
from datetime import datetime
d,m=map(int,input().split())
print(datetime(year=2009,month=m,day=d).strftime("%A"))
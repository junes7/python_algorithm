import sys
from datetime import date, timedelta
input=lambda:sys.stdin.readline().rstrip()
def sol(n):
    start=date(2014,4,2)
    rlt=start+timedelta(days=n-1)
    return rlt
print(sol(int(input())))
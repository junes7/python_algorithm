import sys
input=lambda:sys.stdin.readline().rstrip()
d,m=map(int,input().split())
days=[31,28,31,30,31,30,31,31,30,31,30,31]
weekdays=['Thursday','Friday','Saturday','Sunday','Monday','Tuesday','Wednesday']
total=0
for i in range(m-1):
    total+=days[i]
total+=d-1
print(weekdays[total%7])
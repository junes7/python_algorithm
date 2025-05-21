import sys
from decimal import Decimal
input=lambda:sys.stdin.readline().rstrip()
gpa={'A+':4.3,'A0':4.0,'A-':3.7,'B+':3.3,'B0':3.0,'B-':2.7,'C+':2.3,'C0':2.0,'C-':1.7,'D+':1.3,'D0':1.0,'D-':0.7,'F':0.0}
t_cre,t_gpa=0,0
for _ in range(int(input())):
    sub,cre,grd=input().split()
    cre=int(cre)
    t_cre+=cre
    t_gpa+=cre*gpa[grd]
print(round(Decimal(t_gpa)/t_cre,2))
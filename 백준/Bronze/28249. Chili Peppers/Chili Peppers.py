import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
pepper={'Poblano':1500,'Mirasol':6000,'Serrano':15500,'Cayenne':40000,'Thai':75000,'Habanero':125000}
s=0
for _ in range(n):
    s+=pepper[input()]
print(s)
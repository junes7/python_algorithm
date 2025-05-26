import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=input().split()
sa,sb=0,0
for c in a:
    sa+=int(c)
for c in b:
    sb+=int(c)
wa,wb=len(a)*sa,len(b)*sb
print(0 if wa==wb else 1 if wa>wb else 2)
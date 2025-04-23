import sys
input=lambda:sys.stdin.readline().rstrip()
k1,o1,k2,o2,k3=input().split()
def calculate(n1,o,n2):
    if o!='/':
        return str(eval(n1+o+n2))
    else:
        n1,n2=int(n1),int(n2)
        if n1<0 and n2>=0: return str((n1*-1//n2)*-1)
        elif n2<0 and n1>=0: return str((n1//(n2*-1))*-1)
        return str(n1//n2)
rlt1=int(calculate(k1,o1,calculate(k2,o2,k3)))
rlt2=int(calculate(calculate(k1,o1,k2),o2,k3))
print(min(rlt1,rlt2),max(rlt1,rlt2),sep="\n")
import sys
input=lambda:sys.stdin.readline().rstrip()
x=input()
while int(x)!=int(x[0])*len(x):
    x=str(int(x[0])*len(x))
print("FA" if int(x[0])*len(x)==int(x) else "NFA")
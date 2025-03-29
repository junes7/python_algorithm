import sys
input=lambda:sys.stdin.readline().rstrip()
p=5*int(input())-400
print(p,0 if p==100 else 1 if p<100 else -1,sep="\n")
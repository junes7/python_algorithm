import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(2):
    T,F,S,P,C=map(int,input().split())
    print(6*T+3*F+2*S+1*P+2*C,end=' ')
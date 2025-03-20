import sys
input=lambda:sys.stdin.readline().rstrip()
N=int(input())
S=input()
for i in range(N-1):
    if S[i+1]=='J':
        print(S[i])
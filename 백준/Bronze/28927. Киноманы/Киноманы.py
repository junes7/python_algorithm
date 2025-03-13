import sys
input=lambda:sys.stdin.readline().rstrip()
t1,e1,f1=map(int,input().split())
t2,e2,f2=map(int,input().split())
max_t=t1*3+e1*20+f1*120
mel_t=t2*3+e2*20+f2*120
print("Draw" if max_t==mel_t else "Max" if max_t>mel_t else "Mel")
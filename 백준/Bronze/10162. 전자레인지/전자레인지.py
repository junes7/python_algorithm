import sys
t=int(sys.stdin.readline())
buttons=[300,60,10]
cnts=[]
for button in buttons:
    cnts+=[str(t//button)]
    t%=button
print(-1 if t>0 else ' '.join(cnts))
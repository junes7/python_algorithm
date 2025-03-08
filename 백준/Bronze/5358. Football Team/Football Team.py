import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    t=input()
    if t=="": break
    t=list(t)
    for j in range(len(t)):
        if t[j]=="i" or t[j]=="I":
            t[j]="e" if t[j]=="i" else "E"
        elif t[j]=="e" or t[j]=="E":
            t[j]="i" if t[j]=="e" else "I"
    print(''.join(t))
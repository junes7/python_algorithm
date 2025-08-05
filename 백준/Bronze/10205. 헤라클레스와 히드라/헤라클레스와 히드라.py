import sys
input=lambda:sys.stdin.readline().rstrip()
for i in range(int(input())):
    n=int(input())
    cmd=input()
    for cm in cmd:
        if cm=='b':
            n-=1
        else:
            n+=1
    print(f"Data Set {i+1}:\n{n}\n")
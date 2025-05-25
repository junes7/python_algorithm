import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    s=0
    for i in range(1,int(input())+1):
        if i%2!=0:
            s+=i
    print(s)
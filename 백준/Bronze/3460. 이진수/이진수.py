import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    t=str(bin(int(input()))[2:])[::-1]
    for i in range(len(t)):
        if t[i]=='1':
            print(i,end=' ')
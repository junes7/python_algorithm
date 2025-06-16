import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    max_p,max_name=0,""
    for _ in range(int(input())):
        p,name=input().split()
        if max_p<int(p):
            max_p=int(p)
            max_name=name;
    print(max_name)
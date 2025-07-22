import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for i in range(1,n+1):
    if i==1:
        print("int a;")
        print(f"int {'*'*i}ptr = &a;")
    else:
        print(f"int {'*'*i}ptr{i} = &ptr{'' if i-1==1 else i-1};")
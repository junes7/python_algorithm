import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
print(" "*(n-1) + "*")
if(n!=1):
    for i in range(1,n-1):
        print(" " * (n-1-i) + "*" + " " * (2*i-1) + "*")
    print("*" * (2*n-1))
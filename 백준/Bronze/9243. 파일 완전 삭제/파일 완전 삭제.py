import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
a=list(input())
b=list(input())
for _ in range(n):
    for i in range(len(a)):
        a[i]='1' if a[i]=='0' else '0'
print("Deletion succeeded" if a==b else "Deletion failed")
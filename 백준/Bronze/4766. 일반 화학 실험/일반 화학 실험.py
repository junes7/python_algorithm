import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[float(input())]
while True:
    n=float(input())
    if n==999: break
    print("%.2f" % (n-arr[-1]))
    arr+=[n]
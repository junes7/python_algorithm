import sys
input=lambda:sys.stdin.readline().rstrip()
n,u,l=map(int,input().split())
if n>=1000:
    if u>=8000 or l>=260:
        print("Very Good")
    else:
        print("Good")
else:
    print("Bad")
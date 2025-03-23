import sys
input=lambda:sys.stdin.readline().rstrip()
st="SciComLove"
print(st if int(input())%2==0 else st[::-1])
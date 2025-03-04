import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
st="WelcomeToSMUPC"
print(st[n%len(st)-1])
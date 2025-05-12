import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
while True:
    num=int(input())
    if num==0: break
    print(f"{num} is {'' if num%n==0 else 'NOT '}a multiple of {n}.")
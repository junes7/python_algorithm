import sys
input=lambda:sys.stdin.readline().rstrip()
squares=[2**i for i in range(31)]
print(1 if int(input()) in squares else 0)
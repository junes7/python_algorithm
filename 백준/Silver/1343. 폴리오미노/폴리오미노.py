import sys
input=lambda:sys.stdin.readline().rstrip()
board=input().replace("XXXX","AAAA").replace("XX","BB")
print(-1 if "X" in board else board)
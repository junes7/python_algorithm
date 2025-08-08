import sys
input=lambda:sys.stdin.readline().rstrip()
def setEggplant(x):
    for arr in x:
        if len(set(arr))==1:
            return True
board1=[input().split() for _ in range(10)]
board2=[*zip(*board1)]
print(1 if setEggplant(board1) or setEggplant(board2) else 0)
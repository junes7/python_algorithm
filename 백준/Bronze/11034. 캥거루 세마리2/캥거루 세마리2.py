import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    try:
        A, B, C = map(int, input().split())
        print(max(B-A, C-B)-1)
    except:
        break
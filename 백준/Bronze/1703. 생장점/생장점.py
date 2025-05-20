import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    line = list(map(int, input().split()))
    if line[0] == 0: break
    leaf = 1
    for i in range(1, len(line), 2):
        leaf *= line[i]
        leaf -= line[i + 1]
    print(leaf)
import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    line=[*map(int,input().split())]
    if line[0]==0: break
    leaves=1
    for i in range(1,len(line),2):
        leaves=leaves*line[i]-line[i+1]
    print(leaves)
import sys
input=lambda:sys.stdin.readline().rstrip()
sq1=[*map(int,input())]
sq2=[*map(int,input())]
r=""
for i in range(len(sq1)):
    r+=str(sq1[i]) if sq1[i]>sq2[i] else str(sq2[i])
print(r)
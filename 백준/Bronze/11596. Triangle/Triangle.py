import sys
input=lambda:sys.stdin.readline().rstrip()
tri1=sorted([*map(int,input().split())])
tri2=sorted([*map(int,input().split())])
print("YES" if tri1[0]*tri2[0]+tri1[1]*tri2[1]==tri1[2]*tri2[2] else "NO")
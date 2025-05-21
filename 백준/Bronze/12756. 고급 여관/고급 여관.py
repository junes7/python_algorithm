import sys
input=lambda:sys.stdin.readline().rstrip()
arra=[*map(int,input().split())]
arrb=[*map(int,input().split())]
a,b=arra[1]//arrb[0]+(0 if arra[1]%arrb[0]==0 else 1),arrb[1]//arra[0]+(0 if arrb[1]%arra[0]==0 else 1)
print("DRAW" if a==b else "PLAYER A" if a>b else "PLAYER B")
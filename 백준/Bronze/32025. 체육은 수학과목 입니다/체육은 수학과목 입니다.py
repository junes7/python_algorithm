import sys
input=lambda:sys.stdin.readline().rstrip()
h=int(input())
w=int(input())
minn=h if h<w else w
print(f"{minn/2*100:.0f}")
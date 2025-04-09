import sys
input=lambda:sys.stdin.readline().rstrip()
w=int(input())
l=int(input())
h=int(input())
minn=w if w<l else l
maxn=l if w<l else w
print("good" if minn/h>=2 and maxn/minn<=2 else "bad")
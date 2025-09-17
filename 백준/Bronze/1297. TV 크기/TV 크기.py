import sys
input=lambda:sys.stdin.readline().rstrip()
d, h, w = map(int, input().split())
di = (h*h + w*w)**(1/2)
ratio = d / di
height = int(h * ratio)
width = int(w * ratio)
print("%d %d" %(height, width))
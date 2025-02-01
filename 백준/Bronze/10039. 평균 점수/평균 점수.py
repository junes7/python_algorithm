import sys
s,n=0,0
for i in range(5):
    n=int(sys.stdin.readline().rstrip())
    if n<40: n=40
    s+=n
print(s//5)
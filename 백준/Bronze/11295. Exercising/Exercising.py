import sys
input=lambda:sys.stdin.readline().rstrip()
cnt=1
while True:
    L=int(input())
    if L==0: break
    n=int(input())
    print("User %d" % cnt)
    for _ in range(n):
        walk=int(input())*L
        print("%.5f" % (walk/100000))
    cnt+=1
import sys,math
input=lambda:sys.stdin.readline().rstrip()
cnt=0
while True:
    l,r,t=map(float,input().split())
    if r==0: break
    dist=math.pi*l*r/12/5280
    mph=dist/(t/3600)
    cnt+=1
    print(f"Trip #{cnt}: {round(dist,2):.2f} {round(mph,2):.2f}")
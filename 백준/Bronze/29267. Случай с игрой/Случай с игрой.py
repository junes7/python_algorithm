import sys
input=lambda:sys.stdin.readline().rstrip()
n,k=map(int,input().split())
bullets,save=0,0
for _ in range(n):
    cmd=input()
    if cmd=="ammo":
        bullets+=k
    elif cmd=="save":
        save=bullets
    elif cmd=="shoot":
        bullets-=1
    elif cmd=="load":
        bullets=save
    print(bullets)
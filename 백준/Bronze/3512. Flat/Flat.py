import sys
input=lambda:sys.stdin.readline().rstrip()
n,c=map(int,input().split())
t_area,t_bed,t_price=0,0,0
for _ in range(n):
    a,name=input().split()
    a=int(a)
    if name=="bedroom":
        t_bed+=a
    t_area+=a
    t_price+=(a/2.0 if name=="balcony" else a)*c
print(f"{t_area}\n{t_bed}\n{t_price:.6f}")
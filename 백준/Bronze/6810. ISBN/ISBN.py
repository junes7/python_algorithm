import sys
input=lambda:sys.stdin.readline().rstrip()
st="9780921418"
s,t=0,0
for i in range(10):
    t=int(st[i])
    s+=t*1 if i%2==0 else t*3
for i in range(3):
    t=int(input())
    s+=t*1 if i%2==0 else t*3
print(f"The 1-3-sum is {s:.0f}")
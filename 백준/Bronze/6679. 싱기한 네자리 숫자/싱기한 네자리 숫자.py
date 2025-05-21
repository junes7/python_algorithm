import sys
input=lambda:sys.stdin.readline().rstrip()
def num_len(n,t):
    rem=0
    while n>0:
        rem+=n%t
        n//=t
    return rem
for i in range(1000,10000):
    if num_len(i,10)==num_len(i,12)==num_len(i,16):
        print(i)
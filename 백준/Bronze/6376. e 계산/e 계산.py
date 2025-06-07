import sys
input=lambda:sys.stdin.readline().rstrip()
def facto(n):
    return n*facto(n-1) if n>1 else 1
print("n e")
print("- -----------")
for i in range(1,11):
    s=0
    for j in range(i):
        s+=int(1/facto(j)) if 1%facto(j)==0 else 1/facto(j)
    if i-1<2:
        print("%d %d" % (i-1,s))
    elif i-1==2:
        print("%d %.1f" % (i-1,s))
    else:
        print("%d %.9f" % (i-1,s))
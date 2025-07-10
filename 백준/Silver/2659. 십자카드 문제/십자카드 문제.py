import sys
input=lambda:sys.stdin.readline().rstrip()
cnt=0
def clk_chk(n):
    minn=int(''.join(n))
    for i in range(1,4):
        tmp=int(''.join(n[i:]+n[:i]))
        if minn>tmp:
            minn=tmp
    return minn
clknum=clk_chk(input().split())
for i in range(1111,clknum+1):
    clk=[*str(i)]
    if '0' not in clk and clk_chk(clk)==i:
        cnt+=1
print(cnt)
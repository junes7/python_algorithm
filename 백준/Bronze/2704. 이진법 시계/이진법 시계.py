import sys
input=lambda:sys.stdin.readline().rstrip()
def str_to_bin(st):
    return bin(int(st))[2:].rjust(6,'0')
for _ in range(int(input())):
    H,M,S=map(str_to_bin,input().split(':'))
    col=''.join([h+m+s for h,m,s in zip(H,M,S)])
    row=H+M+S
    print("%s %s" %(col,row))
import sys
n=int(sys.stdin.readline())
end=2*n-1
med=end//2
for i in range(end):
    if i<=med:
        for j in range(i):
            print(' ',end='')
        for j in range(i,end-i):
            print('*',end='')
    else: # i>end//2
        for j in range(med*2-i):
            print(' ',end='')
        for j in range(med*2-i,end-(med*2-i)):
            print('*',end='')
    print()
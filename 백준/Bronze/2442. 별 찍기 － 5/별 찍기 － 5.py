import sys
n=int(sys.stdin.readline())
end=2*n-1
med=end//2
for i in range(n):
    for j in range(med-i):
        print(' ',end='')
    for j in range(med-i,end-(med-i)):
        print('*',end='')
    if i<n-1:
        print()
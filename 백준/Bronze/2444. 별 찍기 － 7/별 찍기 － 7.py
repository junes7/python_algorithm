n=int(input())
len=2*n-1
for i in range(len):
    for j in range(0,len//2-i if i<=len//2 else i-len//2):
        print(" ",end='')
    for j in range(len//2-i if i<=len//2 else i-len//2,len//2+i+1 if i<=len//2 else len+len//2-i):
        print("*",end='')
    if i<len-1:
        print()
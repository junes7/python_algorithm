import sys
input=lambda:sys.stdin.readline().rstrip()
m,n=map(int,input().split())
dict={'1':'one','2':'two','3':'three','4':'four','5':'five','6':'six','7':'seven','8':'eight','9':'nine','0':'zero'}
lst=[]
for i in range(m,n+1):
    t=""
    for c in str(i):
        t+=dict[c]
    lst+=[(t,i)]
lst.sort()
for i in range(len(lst)):
    if i>0 and i%10==0:
        print()
    print(lst[i][1],end=' ')
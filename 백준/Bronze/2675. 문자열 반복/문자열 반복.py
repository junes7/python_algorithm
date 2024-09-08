n=int(input())
for i in range(n):
    r=''
    cnt,s=input().split()
    for c in s:
        r+=c*int(cnt)
    print(r)
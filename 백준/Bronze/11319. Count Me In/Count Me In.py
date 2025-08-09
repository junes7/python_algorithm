import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    st,cnt=input().lower(),[0]*2
    for c in st:
        if c.isalpha():
            if c in ['a','e','i','o','u']:
                cnt[1]+=1
            else:
                cnt[0]+=1
    print(*cnt)
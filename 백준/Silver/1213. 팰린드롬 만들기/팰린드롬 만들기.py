import sys,collections
input=lambda:sys.stdin.readline().rstrip()
chk_word=collections.Counter(input())
cnt,rlt,mid=0,'',''
for k,v in chk_word.items():
    if v%2==1:
        cnt+=1
        mid=k
        if cnt>=2:
            print("I'm Sorry Hansoo")
            exit()
for k,v in sorted(chk_word.items()):
    rlt+=(k*(v//2))
print(rlt+mid+rlt[::-1])
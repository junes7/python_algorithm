import sys
input=lambda:sys.stdin.readline().rstrip()
st,cnt=input(),0
for i in range(len(st)):
    if st[i] in ['a','e','i','o','u']:
        cnt+=1
print(cnt)
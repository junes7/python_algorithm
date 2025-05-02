import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
st=int(input())
cnt=0
while st>0:
    cnt+=st%10
    st//=10
print(cnt)
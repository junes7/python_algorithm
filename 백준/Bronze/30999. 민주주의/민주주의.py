import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
cnt=0
for _ in range(n):
    st=input()
    if st.count('O')>=m//2+1:
        cnt+=1
print(cnt)
import sys
input=lambda:sys.stdin.readline().rstrip()
maxn,cnt=0,0
for _ in range(int(input())):
    st=input()
    cnt=st.count('for')+st.count('while')
    if maxn<cnt:
        maxn=cnt
print(maxn)
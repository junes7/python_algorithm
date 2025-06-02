import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    h,w=map(int,input().split())
    st=[]
    for _ in range(h):
        st.append(input())
    for c in st:
        print(c[::-1])
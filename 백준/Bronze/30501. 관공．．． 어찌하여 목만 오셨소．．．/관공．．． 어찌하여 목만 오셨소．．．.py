import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    st=input()
    if st.count("S"):
        print(st)
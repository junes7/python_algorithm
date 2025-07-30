import sys
input=lambda:sys.stdin.readline().rstrip()
n,st=int(input()),input()
cnt2,cnte=st.count('2'),st.count('e')
print("yee" if cnt2==cnte else "2" if cnt2>cnte else "e")
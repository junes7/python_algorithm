import sys
input=lambda:sys.stdin.readline().rstrip()
st=input()
w=st.count('B')
b=st.count('C')
print(w//2+b//2)
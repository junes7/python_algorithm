import sys
input=lambda:sys.stdin.readline().rstrip()
st=input()
for i in st:
    if i in "CAMBRIDGE":
        st=st.replace(i,"")
print(st)
import sys
input=lambda:sys.stdin.readline().rstrip()
st=""
while True:
    s=input()
    if s=="": break
    st+=s
print(sum([*map(int,st.split(','))]))
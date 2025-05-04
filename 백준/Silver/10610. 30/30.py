import sys
input=lambda:sys.stdin.readline().rstrip()
st=input()
if st.count('0')==0:
    print(-1)
else:
    num=sorted(list(st),reverse=True)
    t=int(''.join(num))
    print(t if t%30==0 else '-1')
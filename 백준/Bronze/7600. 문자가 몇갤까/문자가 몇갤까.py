import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    st,alpha=input(),[]
    if st=="#": break
    st=st.lower()
    for c in st:
        if c.isalpha() and c not in alpha:
            alpha+=[c]
    print(len(alpha))
def solution(number, k):
    r,st='',[]
    for i in number:
        while st and st[-1]<i and k>0:
            st.pop()
            k-=1
        st+=[i]
    if k>0: st=st[:-k]
    r=''.join(st)
    return r
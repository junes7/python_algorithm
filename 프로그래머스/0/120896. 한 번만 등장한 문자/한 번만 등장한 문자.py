def solution(s):
    # method1 with count function
    # r=''.join(sorted([c for c in s if s.count(c)==1]))
    # method2 without sorted and count function
    al=[0]*26
    for c in s:
        al[ord(c)-ord('a')]+=1
    r=''.join(chr(ord('a')+i) for i,n in enumerate(al) if n==1)
    return r
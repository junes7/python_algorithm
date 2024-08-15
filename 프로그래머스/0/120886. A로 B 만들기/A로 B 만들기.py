def solution(before, after):
    # method1 sorted 정렬 함수
    # r=1 if sorted(before)==sorted(after) else 0
    # method2
    b=list(before)
    r=0
    for i in after:
        try:
            del b[b.index(i)]
        except:
            r=0
    if len(b)==0:
        r=1
    return r
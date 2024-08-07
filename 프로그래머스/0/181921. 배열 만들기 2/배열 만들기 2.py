def solution(l, r):
    a = [i for i in range(l,r+1) if all(num in ['0','5'] for num in str(i))]
    if len(a)==0:
        a.append(-1)
    return a
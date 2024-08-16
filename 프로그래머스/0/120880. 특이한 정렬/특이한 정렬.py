def solution(numlist, n):
    r=sorted(numlist,key=lambda x:(abs(n-x),n-x))
    return r
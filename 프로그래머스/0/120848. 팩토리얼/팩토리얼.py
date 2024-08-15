def solution(n):
    # method1 while loop, multiplication
    i,m=1,1
    while m<=n:
        i+=1
        m*=i
    return i-1
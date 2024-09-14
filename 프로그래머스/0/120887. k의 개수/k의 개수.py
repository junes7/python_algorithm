def solution(i, j, k):
    # method1 count function
    r=sum([str(n).count(str(k)) for n in range(i,j+1)])
    # method2 double for statement without count function
    # r=sum([1 for n in range(i,j+1) for c in str(n) if c==str(k)])
    return r
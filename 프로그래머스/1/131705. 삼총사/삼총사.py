def solution(number):
    # method1 triple for statement
    # r,l=0,len(number)
    # for i in range(l-2):
    #     for j in range(i+1,l-1):
    #         for k in range(j+1,l):
    #             if number[i]+number[j]+number[k]==0:
    #                 r+=1
    # method2 with combinations function
    r=0
    from itertools import combinations
    for i in combinations(number,3):
        if sum(i)==0:
            r+=1
    return r
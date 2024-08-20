def solution(nums):
    r=[]
    from itertools import combinations
    for i in combinations(nums,3):
        n,d,t=sum(i),2,[]
        while n>1:
            if not n%d:
                t+=[d]
                n//=d
            else:
                d+=1
        if len(t)==1:
            r+=[sum(i)]
    return len(r)
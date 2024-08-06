def solution(a, b, c):
    # count,answer=0,1
    # if a==b:
    #     if b==c:
    #         count=3 
    #     else:
    #         count=2
    # elif a!=b:
    #     if b==c:
    #         count=2
    #     else:
    #         if a==c:
    #             count=2
    #         else:
    #             count=1
    # for i in range(1,count+1):
    #     answer*=(a**i+b**i+c**i)
    answer=1
    cnt=abs(len(set([a,b,c]))-3)+1
    for i in range(1,cnt+1):
        answer*=(a**i+b**i+c**i)    
    return answer
def solution(num_list):
    # method1
    # r=0
    # for n in num_list:
    #     print(bin(n))
    #     cnt=0
    #     while n>1:
    #         n=n//2 if not n%2 else (n-1)//2
    #         cnt+=1
    #     r+=cnt
    # method2
    r=sum([len(bin(n))-3 for n in num_list])     
    return r
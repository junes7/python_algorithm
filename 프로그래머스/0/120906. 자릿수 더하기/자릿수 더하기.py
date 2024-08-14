def solution(n):
    # method1
    # s=eval('+'.join(i for i in str(n)))
    # method2
    # s=0
    # while n>0:
    #     s+=n%10
    #     n//=10
    # method3
    s=sum(map(int,str(n)))
    return s
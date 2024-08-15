def solution(my_string):
    # method1
    # s=my_string.split()
    # r=int(s[0])
    # for i in range(1,len(s),2):
    #     if s[i]=='+':
    #         r+=int(s[i+1])
    #     else:
    #         r-=int(s[i+1])
    # method2
    r=eval(my_string)
    return r
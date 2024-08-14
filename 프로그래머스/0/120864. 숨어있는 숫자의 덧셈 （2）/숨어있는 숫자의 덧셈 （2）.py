def solution(my_string):
    # method1 while 반복문과 isdigit
    # i,s,n=0,0,''
    # while i < len(my_string):
    #     if my_string[i].isdigit():
    #         n+=my_string[i]
    #         if i==len(my_string)-1:
    #             s+=int(n)
    #             n=''   
    #     else:     
    #         if n!='':
    #             s+=int(n)
    #         n=''
    #     i+=1
    # method2 isdigit과 split 함수
    s=''.join(i if i.isdigit() else ' ' for i in my_string)
    s=sum(map(int,s.split()))
    return s
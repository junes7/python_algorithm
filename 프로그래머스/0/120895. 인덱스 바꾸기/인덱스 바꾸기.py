def solution(my_string, num1, num2):
    l=list(my_string)
    # method1 swap
    # t=l[num1]
    # l[num1]=l[num2]
    # l[num2]=t
    # method2
    l[num1],l[num2]=l[num2],l[num1]
    return ''.join(l)
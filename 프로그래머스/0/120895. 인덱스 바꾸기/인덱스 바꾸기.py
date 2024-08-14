def solution(my_string, num1, num2):
    l=list(my_string)
    # method1 swap
    # t=l[num1]
    # l[num1]=l[num2]
    # l[num2]=t
    # method2 tuple 형태로 값 변환
    l[num1],l[num2]=l[num2],l[num1]
    return ''.join(l)
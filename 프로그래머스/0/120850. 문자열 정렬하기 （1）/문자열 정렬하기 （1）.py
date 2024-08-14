def solution(my_string):
    # method1 isdigit함수
    r=sorted([int(c) for c in my_string if c.isdigit()])
    # method2 isnumeric 함수
    
    # method3 아스키 코드 값
    # r=sorted([int(c) for c in my_string if 48<=ord(c) and ord(c)<=57])
    return r
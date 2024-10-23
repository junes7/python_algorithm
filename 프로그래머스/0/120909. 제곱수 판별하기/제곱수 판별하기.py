def solution(n):
    # method1 is_integer함수 사용
    r=1 if (n**0.5).is_integer() else 2
    # method2 modulus 사용
    # r=1 if not (n**0.5)%1 else 2
    return r
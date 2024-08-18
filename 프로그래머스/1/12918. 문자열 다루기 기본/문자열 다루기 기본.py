def solution(s):
    # method1 isnumeric함수 사용
    return s.isnumeric() if len(s)==4 or len(s)==6 else False
    
def solution(s):
    # [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    print('Hello Python')
    sp=s.lower().count('p')
    sy=s.lower().count('y')
    return True if sp==sy else False
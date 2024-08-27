def solution(n):
    # n을 이진수로 치환했을 때 1의 개수
    ocnt=str(bin(n)).count('1')
    r=n
    while True:
        # n값 1 증가
        r+=1
        # 증가된 값을 이진수로 치환했을 때 1의 개수와
        # n을 이진수로 치환했을 때 1의 개수가 일치할 때 루프를 빠져나옵니다.
        if str(bin(r)).count('1')==ocnt:
            break
    return r
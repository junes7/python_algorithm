def solution(n):
    # n을 이진수로 치환했을 때 1의 개수
    ocnt=str(bin(n)).count('1')
    r=n
    while True:
        r+=1
        if str(bin(r)).count('1')==ocnt:
            break
    return r
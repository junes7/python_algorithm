def solution(myString):
    answer = myString.split('x')
    while '' in answer:
        answer.remove('')
    return sorted(list(answer))
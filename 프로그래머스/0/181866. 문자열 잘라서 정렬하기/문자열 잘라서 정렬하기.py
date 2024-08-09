def solution(myString):
    answer = [i for i in myString.split('x') if len(i)!=0]
    return sorted(list(answer))
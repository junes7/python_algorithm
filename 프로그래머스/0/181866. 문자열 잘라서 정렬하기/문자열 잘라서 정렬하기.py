def solution(myString):
    r=sorted([i for i in myString.split('x') if len(i)!=0])
    return r
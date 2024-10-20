def solution(array, height):
    # method1
    # answer=len([n for n in array if n >height])
    # method2
    answer=sum([1 for n in array if n>height])
    return answer
def solution(array, height):
    answer=len([n for n in array if n >height])
    return answer
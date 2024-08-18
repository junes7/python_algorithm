def solution(arr):
    arr.remove(min(arr))
    return [-1] if not len(arr) else arr
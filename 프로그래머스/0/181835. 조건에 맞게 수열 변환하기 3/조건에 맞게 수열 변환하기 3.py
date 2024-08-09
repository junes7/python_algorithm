def solution(arr, k):
    answer = [i*k if k%2 else i+k for i in arr]
    return answer
def solution(arr, query):
    answer = []
    for i,n in enumerate(query):
        answer=arr[:n+1] if not i%2 else arr[n:]
        arr=answer
    return answer
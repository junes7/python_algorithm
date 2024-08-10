def solution(arr, query):
    for i,n in enumerate(query):
        arr=arr[:n+1] if not i%2 else arr[n:]
    return arr
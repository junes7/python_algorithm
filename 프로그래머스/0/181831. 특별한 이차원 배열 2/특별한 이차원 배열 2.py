def solution(arr):
    answer=1
    for i in range(len(arr)):
        for j in range(len(arr[i])):
            answer*=1 if arr[i][j]==arr[j][i] else 0
    return answer
def solution(arr):
    # method1
    # answer=1
    # for i in range(len(arr)):
    #     for j in range(len(arr[i])):
    #         answer*=1 if arr[i][j]==arr[j][i] else 0
    # method2
    answer=int(all(arr[i][j]==arr[j][i] for i in range(len(arr)) for j in range(len(arr[i]))))
    print(*arr)
    print(list(map(list,zip(*arr))))
    return answer
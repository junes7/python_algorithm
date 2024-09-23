def solution(arr):
    # method1
    # answer=1
    # for i in range(len(arr)):
    #     for j in range(len(arr[i])):
    #         answer*=1 if arr[i][j]==arr[j][i] else 0
    # method2
    # r=int(all(arr[i][j]==arr[j][i] for i in range(len(arr)) for j in range(len(arr[i]))))
    # method3
    r=int(arr==list(map(list,zip(*arr))))
    return r
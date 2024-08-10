def solution(arr):
    # method1
    # s,e=-1
    # for i in range(len(arr)):
    #     if arr[i]==2:
    #         s=i
    #         break
    # for i in range(len(arr)-1,-1,-1):
    #     if arr[i]==2:
    #         e=i
    #         break
    # answer=[-1] if s==-1 and e==-1 else arr[s:e+1]
    # method2
    answer=[-1] if 2 not in arr else arr[arr.index(2):len(arr)-arr[::-1].index(2)]
    return answer
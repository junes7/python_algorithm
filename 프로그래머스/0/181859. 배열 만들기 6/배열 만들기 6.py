def solution(arr):
    stk,i=[],0
    while i<len(arr):
        if not len(stk):
            stk+=[arr[i]]
        else:
            if stk[-1]==arr[i]:
                stk.pop()
            else:
                stk+=[arr[i]]
        i+=1
    return [-1] if not len(stk) else stk
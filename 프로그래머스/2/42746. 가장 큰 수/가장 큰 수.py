def solution(numbers):
    r,arr='',list(map(str,numbers))
    arr.sort(key=lambda x:x*3,reverse=True)
    r='0' if arr[0]=='0' else ''.join(arr)
    return r
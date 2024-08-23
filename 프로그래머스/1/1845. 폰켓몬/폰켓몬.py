def solution(nums):
    p=len(list(set(nums)))
    l=len(nums)//2
    return l if p>l else p
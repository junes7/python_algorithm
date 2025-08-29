def solution():
    import sys
    input = sys.stdin.readline
    while True:
        nums = list(map(int, input().split()))
        if len(nums)==1 and nums[0]==-1: break
        nums = nums[:-1]
        ans = 0
        for num in nums:
            if num*2 in nums: ans+=1
        print(ans)
solution()
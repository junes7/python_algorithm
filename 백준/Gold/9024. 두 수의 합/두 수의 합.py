import sys
input=lambda:sys.stdin.readline().rstrip()
def count_closest_pairs(nums, K):
    nums.sort()
    left, right = 0, len(nums) - 1
    closest_diff = float('inf')
    count = 0
    while left < right:
        current_sum = nums[left] + nums[right]
        current_diff = abs(current_sum-K)
        if current_diff < closest_diff:
            closest_diff = current_diff
            count = 1
        elif current_diff == closest_diff:
            count += 1
        if current_sum<K:
            left += 1
        else:
            right -= 1
    return count
T = int(input().strip())
results = []
for _ in range(T):
    N, K = map(int, input().split())
    nums = list(map(int, input().split()))
    results.append(count_closest_pairs(nums, K))
for result in results:
    print(result)
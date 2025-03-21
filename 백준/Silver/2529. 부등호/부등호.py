import sys
input=lambda:sys.stdin.readline().rstrip()
def check(nums, signs):
    for i in range(len(signs)):
        if signs[i] == '<' and nums[i] >= nums[i + 1]:
            return False
        if signs[i] == '>' and nums[i] <= nums[i + 1]:
            return False
    return True
def find_answer(k, signs):
    used = [False] * 10
    max_result = ""
    min_result = ""
    nums = [-1] * (k + 1)
    def dfs(depth):
        nonlocal max_result, min_result
        if depth == k+1:
            if check(nums, signs):
                current = "".join(map(str, nums))
                if not max_result or max_result<current:
                    max_result = current
                if not min_result or min_result>current:
                    min_result = current
            return
        for i in range(10):
            if not used[i]:
                used[i] = True
                nums[depth] = i
                dfs(depth + 1)
                used[i] = False
    dfs(0)
    return max_result, min_result
k = int(input())
signs = input().split()
max_num, min_num = find_answer(k, signs)
print(max_num)
print(min_num)
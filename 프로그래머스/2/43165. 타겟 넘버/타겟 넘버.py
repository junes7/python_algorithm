def solution(numbers, target):
    def dfs(i,total):
        if i==len(numbers):
            return 1 if total==target else 0
        return dfs(i+1,total+numbers[i])+dfs(i+1,total-numbers[i])
    r=dfs(0,0)
    return r


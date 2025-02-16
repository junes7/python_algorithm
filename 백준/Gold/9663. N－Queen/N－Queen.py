n=int(input())
arr=[0]*n
def is_possible(r):
    for i in range(r):
        if arr[r]==arr[i]:
            return False
        if r-i==abs(arr[r]-arr[i]):
            return False
    return True
def dfs(row):
    if row==n:
        return 1
    ans=0
    for i in range(n):
        arr[row]=i
        if is_possible(row):
            ans+=dfs(row+1)
    return ans
print(dfs(0))
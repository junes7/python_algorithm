import sys
input=lambda:sys.stdin.readline().rstrip()
N, K = map(int, input().split())
C = list(map(int, input().split()))
P = list(map(int, input().split()))
rlt = 0
def pull(idx, array):     # 당기기
    temp = array[:idx] + array[idx+1:] + [0]
    return temp
def push(idx, array):     # 밀기
    temp = array[:idx] + [0] + array[idx:-1]
    return temp
def calculate_sum(array):
    count = 0
    for i in range(N):
        if C[i] == array[i]:
            count += 1
    return count  
def check(array, K):
    global rlt
    rlt = max(rlt, calculate_sum(array))
    if K:
        for idx in range(N):
            check(pull(idx, array), K-1)
            check(push(idx, array), K-1)
def solution():
    check(P, K)
    return rlt
print(solution())
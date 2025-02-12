import sys
from collections import deque
def isprime(n):
    if n<2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True
def find_min_steps(start,target):
    visited={start:0}
    q=deque([start])
    while q:
        curr=q.popleft()
        if curr==target:
            return visited[curr]
        curr_str=str(curr)
        for i in range(len(curr_str)):
            prefix=curr_str[:i]
            digit=int(curr_str[i])
            suffix=curr_str[i+1:]
            for j in range(10):
                if i==0 and j==0 or j==digit:
                    continue
                next_num=int(prefix+str(j)+suffix)
                if isprime(next_num) and next_num not in visited:
                    visited[next_num]=visited[curr]+1
                    q+=[next_num]
    return "Impossible"
input=lambda:sys.stdin.readline().rstrip()
t=int(input())
for i in range(t):
    start,target=map(int,input().split())
    print(find_min_steps(start,target))
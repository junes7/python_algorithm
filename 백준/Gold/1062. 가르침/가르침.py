import sys
from itertools import combinations
input=lambda:sys.stdin.readline().rstrip()
n,k=map(int,input().split())
words=[input() for _ in range(n)]
def solution(n,k,words):
    alpha=set()
    if k<5: return 0
    basic={'a','n','t','i','c'}
    for word in words:
        for c in word:
            alpha.add(c)
    alpha,candidates=alpha-basic,[]
    for c in combinations(alpha,min(len(alpha),k-5)):
        learned,count=basic|set(c),0
        for word in words:
            can_read=True
            for char in word:
                if char not in learned:
                    can_read=False
                    break
            if can_read:
                count+=1
        candidates+=[count]
    return max(candidates) if candidates else 0
print(solution(n,k,words))
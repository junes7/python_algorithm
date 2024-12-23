def solution(numbers):
    import heapq
    n=len(numbers)
    r,h=[-1]*n,[]
    for i in range(n):
        while h and h[0][0] < numbers[i]:
            _,idx=heapq.heappop(h)
            r[idx]=numbers[i]
        heapq.heappush(h,[numbers[i],i])
    return r
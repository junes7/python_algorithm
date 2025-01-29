import sys,heapq
n,accu=int(sys.stdin.readline()),0
cards=[int(sys.stdin.readline()) for i in range(n)]
heapq.heapify(cards)
while len(cards)>1:
    x=heapq.heappop(cards)
    y=heapq.heappop(cards)
    accu+=x+y
    heapq.heappush(cards,x+y)
print(accu)
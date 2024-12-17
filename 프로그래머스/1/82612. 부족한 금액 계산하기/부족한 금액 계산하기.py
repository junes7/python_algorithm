def solution(price, money, count):
    tot=sum([i*price for i in range(1,count+1)])
    r=tot-money if tot-money>0 else 0
    return r
try:
    price, money, count = map(int, input().split())
    print(solution(price, money, count))
except EOFError as e:
    print(e)
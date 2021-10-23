# print elements with reverse order
# without int casting
# method 1
# n=list(map(int, input().split()))
# l=len(n)
# for i in range(l):
#     print(n[l-1-i], end=' ')
# method 2
n=list(input().strip().split())
for i in range(len(n)-1,-1,-1):
    print(n[i], end=' ')
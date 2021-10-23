# sort 확인하기
# 키가 주어지면 순서대로 제대로 섰는지 확인하는 프로그램
# method 1
# n=list(map(int, input().split()))
# b=0
# for i in range(len(n)-1):
#     if n[i] > n[i+1]:
#         b=1
#         break
# print("NO" if b!=0 else "YES")
# method 2
l=list(input().strip().split())
l=[int(i) for i in l]
print("NO" if l!=sorted(l) else "YES")
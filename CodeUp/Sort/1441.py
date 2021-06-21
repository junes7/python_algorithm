# 버블 정렬(Bubble Sort)
# 버블 정렬은 '인접한 두 원소를 검사하여 자리를 바꿔가며 정렬하는 방식'
# 이다. 
# 오름차순으로 정렬된 데이터가 출력
# method 1
# n = int(input())
# a = []
# for i in range(n):
#     a.append(int(input()))
# for i in range (n-1):
#     for j in range((n-i)-1):
#         if a[j] > a[j+1]:
#             t = a[j]
#             a[j] = a[j+1]
#             a[j+1] = t
# for i in range(n):
#     print(a[i])
# method 2
n = int(input())
a = []
for i in range(n):
    a.append(int(input()))
a.sort()
for i in range(n):
    print(a[i])
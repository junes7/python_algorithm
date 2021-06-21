# 선택 정렬(Selection Sort)
# 오름차순 선택 정렬은 '가장 작은 원소를 찾아 첫번째 위치로 옮기고, 남은
# 원소를 또 탐색하여 그 다음 작은 원소를 찾아 두번재 위치로 옮기고, ...
# 이런 식으로 정렬하는 방식'이다.
# '정렬순서상 가장 앞서는 것을 선택해서 가장 왼쪽으로 이동시키고, 원리 그
# 자리에 있던 데이터는 빈 자리에 가져다 놓는다.' -> '빈 자리를 활용하는
# 과정에서 비롯된 교환'
n = int(input())
a = []
for i in range(n):
    a.append(int(input()))
for i in range(n-1):
    min_idx = i
    for j in range(i+1, n):
        if a[min_idx] > a[j]:
            min_idx = j
    # 교환
    t = a[i]
    a[i] = a[min_idx]
    a[min_idx] = t
for i in range(n):    
    print(a[i])
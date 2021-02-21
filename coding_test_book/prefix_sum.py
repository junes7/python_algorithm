# 접두사 합을 활용한 구간 합 계산
n = 5
data = [10, 20, 30, 40, 50]

# 접두사 합(Prefix Sum) 배열 계산
sum_val = 0
prefix_sum = [0]
for i in data:
    sum_val += i
    prefix_sum.append(sum_val)

left = 3
right = 4
print(prefix_sum[right] - prefix_sum[left - 1])

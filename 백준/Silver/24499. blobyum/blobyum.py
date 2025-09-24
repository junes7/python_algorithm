N, K = map(int, input().split())
A_list = list(map(int, input().split()))
A_list += A_list
taste_sum = sum([A for A in A_list[:K]])
maximum_taste_sum = taste_sum
for i in range(1, N):
    taste_sum -= A_list[i - 1]
    taste_sum += A_list[i + K - 1]
    if maximum_taste_sum < taste_sum:
        maximum_taste_sum = taste_sum
print(maximum_taste_sum)
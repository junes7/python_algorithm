import sys
input=lambda:sys.stdin.readline().rstrip()
N = int(input())
time_list = [0] * N
for i in range(N):
    time_list[i] = sum(map(int, input().split()[1:]))
sorted_time_list = sorted(time_list)
prefix_sum = [0] * (N + 1)
for j, time in enumerate(sorted_time_list, 1):
    prefix_sum[j] = prefix_sum[j - 1] + time
print(sum(prefix_sum))
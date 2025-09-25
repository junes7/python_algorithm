N = int(input())
pizza_list = list(map(int, input().split()))
time_list = [0] * N
count = 0
index = 0
while 0 < sum(pizza_list):
    if pizza_list[index] != 0:
        pizza_list[index] -= 1
        count += 1
    if pizza_list[index] == 0 and time_list[index] == 0:
        time_list[index] = count
    index += 1
    if index == len(pizza_list):
        index = 0
print(*time_list)
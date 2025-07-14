import sys
input=lambda:sys.stdin.readline().rstrip()
R, C = map(int, input().split())
history_dict = dict(zip(range(1, 9 + 1), [0] * 9))
for i in range(1, R + 1):
    line = input()
    if line.count('.') == C - 2:
        continue
    kayak_distance = 0
    for char in line[1:-1]:
        if char.isdigit():
            history_dict[int(char)] = kayak_distance
            break     
        kayak_distance += 1
history_list = sorted(history_dict.items(), key=lambda x: -x[1])
current_rank = 1
before = -1
rank_list = [0] * (9 + 1)
for kayak, distance in history_list:
    if before < 0:
        before = distance
    if before != distance:
        current_rank += 1
    rank_list[kayak] = current_rank
    before = distance
for rank in rank_list[1:]:
    print(rank)
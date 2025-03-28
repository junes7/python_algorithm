import sys
input=lambda:sys.stdin.readline().rstrip()
def solve_rpg(n, quests):
    dp = [[False] * 1001 for _ in range(1001)]
    remaining = [[0] * 1001 for _ in range(1001)]
    quest_count = [[0] * 1001 for _ in range(1001)]
    max_str = max(quest[0] for quest in quests) + 1
    max_int = max(quest[1] for quest in quests) + 1
    dp[1][1] = True
    for str_stat in range(1, max_str):
        for int_stat in range(1, max_int):
            point_sum = 0
            cleared = 0
            for str_req, int_req, point in quests:
                if str_stat >= str_req or int_stat >= int_req:
                    point_sum += point
                    cleared += 1
            quest_count[str_stat][int_stat] = cleared
            remaining[str_stat][int_stat] = point_sum - (str_stat-1) - (int_stat-1)
            if str_stat > 1 and dp[str_stat-1][int_stat] and remaining[str_stat-1][int_stat] > 0:
                dp[str_stat][int_stat] = True
            if int_stat > 1 and dp[str_stat][int_stat-1] and remaining[str_stat][int_stat-1] > 0:
                dp[str_stat][int_stat] = True
    max_cleared = 0
    for str_stat in range(1, max_str):
        for int_stat in range(1, max_int):
            if dp[str_stat][int_stat]:
                max_cleared = max(max_cleared, quest_count[str_stat][int_stat])
    return max_cleared
n=int(input())
quests=[[*map(int,input().split())] for _ in range(n)]
print(solve_rpg(n, quests))
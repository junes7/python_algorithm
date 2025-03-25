import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    N, A, B = map(int, input().split())
    if N == A == B == 0:
        break
    teams = [list(map(int, input().split())) for _ in range(N)]
    teams.sort(key=lambda x: abs(x[1]-x[2]), reverse=True)
    total_distance = 0
    equal_distance_teams = []
    for balloons, dist_a, dist_b in teams:
        if dist_a > dist_b:
            if B >= balloons:
                B -= balloons
                total_distance += dist_b * balloons
            else:
                total_distance += dist_b * B
                balloons -= B
                total_distance += dist_a * balloons
                B = 0
        elif dist_a < dist_b:
            if A >= balloons:
                A -= balloons
                total_distance += dist_a * balloons
            else:
                total_distance += dist_a * A
                balloons -= A
                total_distance += dist_b * balloons
                A = 0
        else:
            equal_distance_teams.append([balloons, dist_a, dist_b])
    for balloons, dist, _ in equal_distance_teams:
        total_distance += balloons * dist
    print(total_distance)
import sys
input=lambda:sys.stdin.readline().rstrip()
def min_sensor_range(n, k, sensors):
    # 센서 위치 정렬
    sensors.sort()
    # 인접한 센서 간의 거리 계산
    distances = []
    for i in range(1, n):
        distances.append(sensors[i] - sensors[i-1])
    # 거리를 정렬하여 가장 큰 거리부터 처리
    distances.sort()
    # 전체 거리에서 k-1개의 가장 큰 거리를 제외
    result = sensors[-1]-sensors[0]  # 초기 전체 거리
    # k-1개의 가장 큰 거리를 제외
    for i in range(min(k-1, n-1)):
        result -= distances[-i-1]  # 가장 큰 거리부터 제외
    return max(0,result)  # 최종 결과 반환
n = int(input())
k = int(input())
sensors = list(map(int, input().split()))
print(min_sensor_range(n, k, sensors))
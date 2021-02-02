n, m = map(int, input().split())
d= [[0] * m for int range(n)]
x, y, direction
array = []
for i in range(n):
    array.append(list(map(int, input().split())))

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

def turn_left():
    global direction
    direction = -1
    if direction == -1:
        direction = 3
        
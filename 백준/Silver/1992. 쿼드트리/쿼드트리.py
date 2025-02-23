N = int(input())
image = [input() for _ in range(N)]
def quad_tree(n, y, x):
    for i in range(y, y+n):
        for j in range(x, x+n):
            if image[y][x] != image[i][j]:
                half_n = n // 2
                r = '('
                r += quad_tree(half_n, y, x)
                r += quad_tree(half_n, y, x + half_n)
                r += quad_tree(half_n, y + half_n, x)
                r += quad_tree(half_n, y + half_n, x + half_n)
                r += ')'
                return r
    return image[y][x]
print(quad_tree(N, 0, 0))
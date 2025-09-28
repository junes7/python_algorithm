T = int(input())
for _ in range(T):
    s, p = input().split()
    result = s.replace(p, "@")
    print(len(result))
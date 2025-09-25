for _ in range(int(input())):
    p, _ = map(int, input().split())
    s = set([input() for _ in range(p)])
    print(abs(p - len(s)))
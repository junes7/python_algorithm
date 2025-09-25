for _ in range(int(input())):
    s = input()
    s = s[s.index('1'):]
    print(int(s, 2))
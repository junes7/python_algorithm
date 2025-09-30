import sys
input = sys.stdin.readline
for _ in range(int(input())):
    t = input().strip()
    while (t != 0 or t!= 1):
        if '0!' in t:
            t = t.replace('0!', '1')
            continue
        elif '1!' in t:
            t = t.replace('1!', '1')
            continue
        elif '!0' in t:
            t = t.replace('!0', '1')
        elif '!1' in t:
            t = t.replace('!1', '0')
        else:
            break
    print(t)
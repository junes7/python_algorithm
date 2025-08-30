import sys
input=lambda:sys.stdin.readline().rstrip()
N = int(input())
for n in range(N):
    eng = [0]*26
    s = sys.stdin.readline().strip()
    s = s.lower()
    cnt = 0
    for i in s:
        check = ord(i) - 97
        if 0 <= check <= 25:
            eng[check] = 1
    for i in eng:
        if i:
            cnt += 1
    if cnt == 26:
        print('pangram')
    else:
        print('missing ', end = '')
        for i in range(26):
            if eng[i] == 0:
                print(chr(i+97), end = '')
        print()
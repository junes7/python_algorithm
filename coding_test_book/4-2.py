# 다음 중 시각에 3이 하나라도 포함되어 있으면 세어라.
n = int(input())
result = 0
for h in range(n+1):
    for m in range(60):
        for s in range(60):
            if '3' in str(h) + str(m) + str(s):
                result += 1
print(result)
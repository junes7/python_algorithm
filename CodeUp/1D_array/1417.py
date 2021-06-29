# 범인을 잡아라 2(Catch the criminal with height)
# 이번에 또 도둑이 들었다. 도둑으로 판단되는 용의자를 10명을 검거하였다.
# CCTV를 정밀 분석한 결과 도둑은 검거한 10명 중 키가 3번째로 크다는 사실을
# 알았다. 10명의 키를 조사하여 도둑을 검거하는 프로그램을 작성하시오. (단,
# 입력되는 모든 키는 서로 다르다.) 10 명의 키가 차례대로 입력
# 입력값 오름차순 정렬 후 3번째로 큰 값 출력
# methdo 1
h = list(map(int, input().split()))
l = len(h)-1
for i in range(len(h)-1):
    for j in range(l):
        if h[j] > h[j+1]:
            t = h[j]
            h[j] = h[j+1]
            h[j+1] = t
    l -= 1
print(h[len(h)-3])
# 자리 배치
# A중학교에 첫 발령을 받은 B교사는 1학년 1반 담임을 맡게 되었다. 기대를 안고
# 첫 출근한 B교사는 너무 설렌 나머지 학생들이 등교하기도 전에 교실에 가서
# 학생들이 오기만을 기다리고 있었다. 그리고 제일 먼저 무슨 일을 해야 될지
# 생각하던 중 학생들 자리 배치를 우선적으로 해야겠다고 생각했다. 여러 가지
# 자리 배치 방법을 고려하다가 학생들의 키가 작은 순서대로 앞에서부터 앉히는
# 것이 제일 좋은 방법이라고 결정하게 되었다.
# 예를 들어, 160, 165, 164, 165, 150, 165, 168, 145, 170의 학생들 키가
# 주어지고 한 줄에 6명씩 앉는다면 다음과 같이 앉으면 될 것이다.
# 왼쪽 위부터 차례대로 키 순서대로 앉으며 한 줄이 다 찼을 경우 다음 줄로
# 넘어간다. 다음 줄도 마찬가지로 왼쪽부터 채운다.
# 이와 같이 학생의 키순서대로 자리를 배치하는 프로그램을 작성하시오.
# method 1
n, c = map(int, input().split())
h = list(map(int, input().split()))
h.sort()
for i in range(n):
    if i % c == 0 and i != 0:
        print()
    print(h[i], end=' ')
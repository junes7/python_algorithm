N, M = map(int, input().split())
song = {}
for _ in range(N):
    T, S, a1, a2, a3, a4, a5, a6, a7 = input().split()
    A = [a1, a2, a3]	# 첫 세 음만 리스트로 저장
    song[S] = A		# key가 노래 제목, value가 첫 세 음
for _ in range(M):
    B = input().split()
    count = 0	# 같은 노래가 몇 개인지 저장할 변수
    title = ""	# 노래 제목 저장할 변수
    for s in song:
        if B == song[s]:	# 첫 세 음이 같다면
            count += 1
            title = s	# title 변수는 count가 1일때만 기능을 발휘한다.
    if count >= 2:
        print("?")
    elif count == 1:
        print(title)
    else:
        print("!")
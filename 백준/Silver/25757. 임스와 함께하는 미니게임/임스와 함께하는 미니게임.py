import sys
n, k = sys.stdin.readline().split()
people = set()    # set을 이용해 주어진 사람들을 중복 제거
for _ in range(int(n)):
    people.add(sys.stdin.readline().rstrip())
p = len(people)
if k == 'Y':   # 윷놀이
    print(p)
elif k == 'F':   # 같은 그림 찾기
    print(p//2)
else:   # 원카드
    print(p//3)
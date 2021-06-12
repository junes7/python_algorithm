# 당신의 사주를 봐 드립니다 1(I'm lettting you off the hook)
# 태어난 해, 월, 일을 입력, 사주팔자를 보는 프로그램을 작성
# 사주 보는 법: 세 수(년, 월, 일) 주어지면, (년 - 월 + 일)
# 에 마자막 숫자가 0이면 "대박" 출력, 아니면 "그럭저럭" 출력
# method 1
y, m, d = map(int, input().split())
l = (y - m + d) % 10
print("대박" if l == 0 else "그럭저럭")
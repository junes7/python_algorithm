# 정수 1개 입력받아 분류하기
# 0이 아닌 정수 1개가 입력되었을 때, 음(-)/양(+)과
# 짝(even)/홀(odd)를 구분해 분류해보자.
# 음수이면서 짝수이면 A, 음수이면서 홀수이면 B,
# 양수이면서 짝수이면 C, 양수이면서 홀수이면 D
# method 1
# n = int(input())
# if n < 0:
#     if n % 2 == 0:
#         print('A')
#     else:
#         print('B')
# else:
#     if n % 2 == 0:
#         print('C')
#     else:
#         print('D')
# method 2
n = int(input())
print(('A' if n % 2 == 0 else 'B') if n < 0 else ('C' if n % 2 == 0 else 'D'))
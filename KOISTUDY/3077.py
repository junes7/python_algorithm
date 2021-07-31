# 정수 1개 입력받아 분류하기
# classification of one integer
# 0이 아닌 정수 1개를 입력받아 음(-)/양(+)과 짝(even)/홀(odd)을 출력.
# 음수이면서 짝수이면, A
# 음수이면서 홀수이면, B
# 양수이면서 짝수이면, C
# 양수이면서 홀수이면, D
# 를 출력한다.
n = int(input())
if n < 0:
    print('A' if n%2==0 else 'B')
else:
    print('C' if n%2==0 else 'D')
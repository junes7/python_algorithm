# 두 수의 대소 비교
# 두 정수의 크기를 비교해 왼쪽 수가 크면 >를 출력,
# 오른쪽 수가 크면 <를 출력, 같으면 =을 출력하시오.
# method 1
a, b = map(int, input().split())
if a > b:
    print('>')
elif a < b:
    print('<')
else: # a==b
    print('=')
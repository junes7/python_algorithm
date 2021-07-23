# 대칭수(palindromic number)
# 앞에서부터 읽을 때나 뒤에서부터 읽을 때나 모양이 같은 수를 대칭수(palindrome)
# 라고 부릅니다. 두 자리 수를 곱해 만들 수 있는 대칭수 중 가장 큰 수는 9009
# (=91×99) 입니다. 어떤 정수 a와 b(a<=b) 사이의 수를 곱해 만들 수 있는 가장 큰
# 대칭수를 구하시오.
# 정수 a와 b가 공백으로 분리되어 입력된다.(0<=a<=b<=999)
# 가장 큰 대칭수를 출력한다. (입력 범위안에 대칭 수는 반드시 존재한다.)
# method 1
def palindrome(num):
    string = str(num)
    if string == string[::-1]:
        return True
    else:
        return False
a, b = map(int, input().split())
max = 0
for i in range(a, b+1):
    for j in range(a, b+1):
        m = i * j
        if palindrome(m) and max < m:
            max = m
print(max)
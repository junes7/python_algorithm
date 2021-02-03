# 팩토리얼 예제 2가지 방법으로 구하기
# 반복적으로 구현한 n!
def factorial_iteration(n):
    result = 1
    for i in range(1, n+1):
        result *= i
    return result


# 재귀적으로 구현한 n!
def factorial_recursive(n):
    if n <= 1:
        return 1
    result = n * factorial_recursive(n-1)
    return result

print('반복적으로 구현:', factorial_iteration(5))
print('재귀적으로 구현:', factorial_recursive(5))

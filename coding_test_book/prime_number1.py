# 시간 복잡도 O(x^(1/2))
import math
def is_prime_number_1(x):
    for i in range(2, int(math.sqrt(x))+1):
        if x % i == 0:
            return False
    return True
print(is_prime_number_1(4))
print(is_prime_number_1(7))

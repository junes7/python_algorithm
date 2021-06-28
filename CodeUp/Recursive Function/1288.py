# n_C_r (Tiny) (get Combination)
# n_C_r은 n개의 원소를 가지는 집합에서 r개의 부분 집합을 고르는 조합의 수를
# 말한다. n_C_r 일반 공식은 다음과 같다.
# n_C_r = n_P_r / r! = n! / (r!*(n-r)!)
# 5_C_2 = 5!//(3!X2!) = 5 X 4 X 3 X 2 X 1 // (3x2X1) X (2X1) = 10
# n_C_r을 구하는 프로그램을 작성하시오. | n과 r이 입력된다.
# method 1
n, r = map(int, input().split())
def facto(x):
    return 1 if x == 0 or x == 1 else x * facto(x-1)
print(facto(n) // (facto(n-r) * facto(r)))
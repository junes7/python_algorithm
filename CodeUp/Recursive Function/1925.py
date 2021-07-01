# n_C_r (Small)
# n_C_r은 n개의 원소를 가지는 집합에서 r개의 부분 집합을 고르는 조합의 수를
# 말한다. n_C_r을 구하는 프로그램을 작성하시오.
# method 1 with memoization
n, r = map(int, input().split())
d = [0] * 31
def fact(k):
    if d[k] != 0:
        return d[k]
    else:
        if k == 0 or k == 1:
            d[k] = 1
        elif k == 2:
            d[k] = 2
        else:
            d[k] = k * fact(k-1)
        return d[k]
def combi(n, r):
    return fact(n) // (fact(r) * fact(n-r))
print(combi(n, r))
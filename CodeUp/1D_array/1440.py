# 비교(compare numbers)
# n개의 숫자가 입력되면 다음과 같이 크기를 비교한 후 양식에 맞춰 출력하시오.
# 1 2 3 2 1 이라는 숫자가 입력되면, 첫 번째 1과 나머지 2, 3, 2, 1을 비교하면
# 1 < 2, 1 < 3, 1 < 2, 1 = 1 이므로 < < < = 를 출력한다. 이런식으로 두 번째는
# > < = >, 세 번째는 > > > >, 네 번째는 > = < >, 다섯번째는 = < < <를 출력.
# method 1
n = int(input())
k = list(map(int, input().split()))
for i in range(n):
    print(i+1, ':', sep='', end=' ')
    for j in range(n):
        if i == j:
            continue
        else:
            if k[i] < k[j]:
                print('<', end=' ')
            elif k[i] == k[j]:
                print('=', end=' ')
            else: # k[i] > k[j]
                print('>', end=' ')
    print()
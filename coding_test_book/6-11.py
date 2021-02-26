# 두 배열의 원소 교체
n, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

# 각 배열 정렬하기(a는 forward(정방향), b는 reverse(역방향))
a.sort()
b.sort(reverse=True)

# k번 만큼 바꿔치기 연산 수행
for i in range(k):
    if a[i] < b[i]:
        a[i], b[i] = b[i], a[i]
    else:
        break
# 배열 A의 모든 원소의 합
print(sum(a))

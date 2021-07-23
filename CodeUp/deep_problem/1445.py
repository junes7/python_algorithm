# 정렬된 두 배열 합치기(merge sorted two arrays)
# 정렬된 두 배열을 합쳐서 정렬하시오.
# 첫 줄에 두 배열의 크기 n, m이 입력된다.(두 배열의 크기는 각각 1000보다 작다)
# 두번째 줄에 첫 번째 배열의 원소들이 오름차순으로 정수로 입력된다.
# 세번째 줄에 두 번째 배열의 원소들이 오름차순으로 정수로 입력된다.
# 두 배열을 합쳐서 오름차순 정렬된 배열을 출력하시오.
# method 1
n, m = map(int, input().split())
d1 = list(map(int, input().split()))
d2 = list(map(int, input().split()))
d1.extend(d2)
d1.sort()
for i in range(len(d1)):
    print(d1[i], end=' ')
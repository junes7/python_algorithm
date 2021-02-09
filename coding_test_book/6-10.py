# N을 입력받기
n = int(input())
# N명의 학생 정보를 입력받아 리스트에 저장
array = []
for i in range(n):
    input_data = input().split()
    array.append((input_data[0], input_data[1]))
# 키(Key)를 이용하여, 정수를 기준으로 정렬
array = sorted(array, key=lambda student: student[1], reverse=True)
# 정렬이 수행된 결과를 출력
for student in array:
    print(student[0], end=' ')


# 세트에서 임의의 요소 삭제하기
a = {1, 2, 3, 4}
a.pop()
print(a)
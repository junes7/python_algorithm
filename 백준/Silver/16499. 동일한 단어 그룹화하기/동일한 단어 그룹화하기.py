import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
arr = []
for _ in range(n):
    word = sorted(list(input()))	# 입력받은 문자열들을 알파벳 단위로 잘라서 리스트에 저장 후 정렬
    word = ''.join(word)	# 정렬한 문자열을 다시 합치기
    if word not in arr:	
        arr.append(word)	# arr에 해당 단어가 없다면 추가하기
print(len(arr))	# 앞의 과정을 통해 추출된 단어들이 담긴 리스트의 개수 = 나눌 수 있는 그룹의 수
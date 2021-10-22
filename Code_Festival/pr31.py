# The complexity of python data
# 파이썬 자료형의 복잡도
# 리스트 내장함수의 시간 복잡도가 O(1)이 아닌 것은?
# 정답 3번
# 인덱스 범위 만큼 출력해야 되기 때문에
# O(1)을 초과할 수 있다. 
# 1 l[i]
# 2 l.append(5)
# 3 l[a:b]
# 4 l.pop()
# 5 l.clear()
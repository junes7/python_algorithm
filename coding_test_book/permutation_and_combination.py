import itertools
# 순열
data = [1, 2]
for x in itertools.permutations(data, 2):
    print(list(x), end=' ')
print()
# 조합
data1 = [1, 2, 3]
for x in itertools.combinations(data1, 2):
    print(list(x), end=' ')

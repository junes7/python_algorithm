testCase = int(input())
for _ in range(testCase):
    lineLength = int(input())
    l1 = input().split()
    l2 = input().split()
    indexList = []
    for item in l1:
        indexList.append(l2.index(item))
    secret = input().split()
    resultList = []
    for index in indexList:
        resultList.append(secret[index])
    print(*resultList)
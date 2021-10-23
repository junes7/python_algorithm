# count number of word
# method 1
n=input()
print(n.count(' ')+1)
# method 2
# strip으로 앞 뒤 공백 제거 후 리스트화
m = input()
l=list(m.strip().split())
print(len(l))
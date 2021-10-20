# for문 이용
n=input()
for i in range(len(n)-1,-1,-1):
    print(n[i], end='')
print()
# list index 이용
m=input()
print(m[::-1])
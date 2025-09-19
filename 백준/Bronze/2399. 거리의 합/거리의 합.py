import sys
temp=0
n=int(input())
nums=list(map(int,sys.stdin.readline().split())) #한줄만 입력받을땐 그냥 split()함수사용
for i in nums:
    for value in nums:
        temp+=abs(i-value)
print(temp)
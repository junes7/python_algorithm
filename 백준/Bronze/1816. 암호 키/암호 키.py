import sys
input=lambda:sys.stdin.readline().rstrip()
TC = int(input())
numbers = []
for _ in range(TC):
    numbers.append(int(input()))
for number in numbers:
    answer = ""
    for i in range(2,1000000):
        if number% i ==0:
            answer = "NO"
            break
    if answer=="":
        answer= "YES"
    print(answer)
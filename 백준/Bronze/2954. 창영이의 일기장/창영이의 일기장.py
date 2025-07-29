import sys
input=lambda:sys.stdin.readline().rstrip()
data = input()
value = ['a', 'e', 'i', 'o', 'u']
num = 0
while num < len(data) :
    print(data[num], end='')
    if data[num] in value :
        num += 2
    num += 1
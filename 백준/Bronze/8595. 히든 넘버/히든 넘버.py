import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
s = input()
current_number,total_sum=0,0
for char in s:
    if char.isdigit():
        current_number = current_number*10 + int(char)
    else:
        total_sum+=current_number
        current_number = 0
total_sum += current_number
print(total_sum)
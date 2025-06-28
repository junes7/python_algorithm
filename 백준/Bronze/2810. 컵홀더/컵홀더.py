import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
member = input()
count = member.count('LL')
if (count <= 1):
    print(len(member))
else:
    print(len(member) - count + 1)
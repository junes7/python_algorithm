import sys
input=lambda:sys.stdin.readline().rstrip()
s = ""
for i in range(1, 100001):
    s += str(i)
print(s.find(input())+1)
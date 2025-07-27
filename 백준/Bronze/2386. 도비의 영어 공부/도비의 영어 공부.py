import sys
input=lambda:sys.stdin.readline().rstrip()
while True :
    n = input()
    if n == '#' :
        break
    value = n[0]
    data = n[2::]
    result = data.count(value) + data.count(value.upper())
    print(value, result)
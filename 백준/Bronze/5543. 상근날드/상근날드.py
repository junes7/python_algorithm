import sys
input=lambda:sys.stdin.readline().rstrip()
burgers=[int(input()) for _ in range(3)]
drinks=[int(input()) for _ in range(2)]
price=4000
for burger in burgers:
    for drink in drinks:
        t=burger+drink-50
        if t<price:
            price=t
print(price)
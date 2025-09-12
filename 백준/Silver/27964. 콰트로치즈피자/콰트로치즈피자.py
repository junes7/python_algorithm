import sys
input=lambda:sys.stdin.readline().rstrip()
N = int(input())
topping = list(input().split())
quattro = set() # 빈 set 집합
for t in topping:
    if t.endswith("Cheese"):
        quattro.add(t)
if len(quattro) >= 4:
    print("yummy")
else:
    print("sad")
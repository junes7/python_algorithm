import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    name,age,weight=input().split()
    age,weight=int(age),int(weight)
    if name=="#" and age==0 and weight==0: break
    cl="Senior" if age>17 or weight>=80 else "Junior"
    print(name,cl)
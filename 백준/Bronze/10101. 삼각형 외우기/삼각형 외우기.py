num=[]
for i in range(3):
    num+=[int(input())]
num.sort()
if sum(num)==180:
    if num[0]==60:
        print("Equilateral")
    else:
        print("Isosceles" if num[0]==num[1] or num[1]==num[2] else "Scalene")
else:
    print("Error")
import sys
input=lambda:sys.stdin.readline().rstrip()
l=int(input())
r=int(input())
fine=r-l
if 1<=fine<=20:
    fine=100
elif 21<=fine<=30:
    fine=270
elif 31<=fine:
    fine=500
if fine<=0:
    print("Congratulations, you are within the speed limit!")
else:
    print(f"You are speeding and your fine is ${fine:.0f}.")
import sys
input=lambda:sys.stdin.readline().rstrip()
for i in range(3,0,-1):
    n=input()
    if n not in ['Fizz','Buzz','FizzBuzz']:
        n=int(n)+i
        break
print('Fizz'*(n%3==0)+'Buzz'*(n%5==0) or n)
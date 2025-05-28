import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    total=0
    arr=[*map(int,input())]
    for i, num in enumerate(arr):
        if(i+1)%2!=0:
            num*=2
        total+=num//10+num%10 if num>9 else num
    print("T" if total%10==0 else "F")
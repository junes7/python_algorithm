import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[int(input()) for _ in range(3)]
total,l=250,0
while True:
    if l>=arr[0]-arr[1]:
        break
    l+=arr[2]
    total+=100
print(total)
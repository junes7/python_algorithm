import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[int(input()) for _ in range(4)]
if (arr[0]==8 or arr[0]==9) and (arr[3]==8 or arr[3]==9):
    if arr[1]==arr[2]:
        print("ignore")
    else:
        print("answer")
else:
    print("answer")
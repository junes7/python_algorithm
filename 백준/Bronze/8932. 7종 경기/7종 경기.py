import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    arr=[*map(int,input().split())]
    print(int(9.23076*(26.7-arr[0])**1.835)+
          int(1.84523*(arr[1]-75)**1.348)+
          int(56.0211*(arr[2]-1.5)**1.05)+
          int(4.99087*(42.5-arr[3])**1.81)+
          int(0.188807*(arr[4]-210)**1.41)+
          int(15.9803*(arr[5]-3.8)**1.04)+
          int(0.11193*(254-arr[6])**1.88))
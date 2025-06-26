import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=bin(n)
#10진수 n을 2진수로 변환 , arr타입은 str
arr=arr[2:]
#0b를 없애주자! 3번째 수부터 출력
arr_reverse=arr[::-1]
#뒤집어주기
num=int(arr_reverse,2)
print(num)
import sys
input=lambda:sys.stdin.readline().rstrip()
joker=1
for i in range(int(input())):
    A,next=[*map(int,input().split())],0
    # left deck
    if joker<=13:
        left_sum=0
        for j in range(len(A)):
            # Even 짝수
            if j%2==0:
                next+=A[j]
            # Odd 홀수
            else: # j%2==1
                if left_sum+A[j]>=joker:
                    next+=joker-left_sum
                    break
                else:
                    next+=A[j]
                    left_sum+=A[j]
    # right deck
    elif joker>13:
        joker-=13
        right_sum=0
        for j in range(len(A)):
            # Odd 홀수
            if j%2==1:
                next+=A[j]
            # Even 짝수
            else: # j%2==0
                if right_sum+A[j]>=joker:
                    next+=joker-right_sum
                    break
                else:
                    next+=A[j]
                    right_sum+=A[j]
    joker=next
print(joker)
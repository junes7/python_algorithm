import sys
input=lambda:sys.stdin.readline().rstrip()
joker_pos=1
for _ in range(int(input())):
    A,next=[*map(int,input().split())],0
    if joker_pos<=13:
        left_sum=0
        for j in range(len(A)):
            if j%2==0:
                next+=A[j]
            else:
                if left_sum+A[j]>=joker_pos:
                    next+=joker_pos-left_sum
                    break
                else:
                    left_sum+=A[j]
                    next+=A[j]
    else:
        joker_pos-=13
        right_sum=0
        for j in range(len(A)):
            if j%2==1:
                next+=A[j]
            else:
                if right_sum+A[j]>=joker_pos:
                    next+=joker_pos-right_sum
                    break
                else:
                    right_sum+=A[j]
                    next+=A[j]
    joker_pos=next
print(joker_pos)
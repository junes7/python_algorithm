import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
lessons=list(map(int,input().split()))
def can_record(lessons,m,size):
    cnt,cur_sum=1,0
    for lesson in lessons:
        if lesson>size:
            return False
        if cur_sum+lesson>size:
            cnt+=1
            cur_sum=0
        cur_sum+=lesson
    return cnt<=m
def min_bluray_size(n,m,lessons):
    left,right=max(lessons),sum(lessons)
    result=right
    while left<=right:
        mid=(left+right)//2
        if can_record(lessons,m,mid):
            result=mid
            right=mid-1
        else:
            left=mid+1
    return result
print(min_bluray_size(n,m,lessons))
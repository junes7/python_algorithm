import sys
input=lambda:sys.stdin.readline().rstrip()
l,w,h=map(int,input().split())
n=int(input())
blocks=[list(map(int,input().split())) for _ in range(n)]
def fill_boxes(l,w,h,blocks):
    blocks.sort(key=lambda x:x[0],reverse=True)
    volume=l*w*h
    total_cnt,used_volume=0,0
    for i in range(n):
        size=2**blocks[i][0]
        cnt=blocks[i][1]
        if volume<=used_volume:
            break
        max_cnt=(l//size)*(w//size)*(h//size)
        max_cnt-=used_volume//(size**3)
        use_cnt=min(cnt,max_cnt)
        used_volume+=use_cnt*(size**3)
        total_cnt+=use_cnt
    return total_cnt if used_volume==volume else -1
print(fill_boxes(l,w,h,blocks))
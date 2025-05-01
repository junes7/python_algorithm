import sys
input=lambda:sys.stdin.readline().rstrip()
def draw_stars(n):
    if n==1: return ['*']
    stars=draw_stars(n//3)
    rlt=[]
    for i in range(3):
        for star in stars:
            rlt+=[star*3] if i%2==0 else [star+' '*(n//3)+star]
    return rlt
print("\n".join(draw_stars(int(input()))))
import sys
input=lambda:sys.stdin.readline().rstrip()
def draw_stars(n):
    if n==1: return ['*']
    stars=draw_stars(n//3)
    result=[]
    for star in stars:
        result.append(star*3)
    for star in stars:
        result.append(star+' '*(n//3)+star)
    for star in stars:
        result.append(star*3)
    return result
print('\n'.join(draw_stars(int(input()))))
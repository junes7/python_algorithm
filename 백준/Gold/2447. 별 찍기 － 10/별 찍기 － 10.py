import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
def draw_stars(n):
    if n==1: return ['*']
    stars,result=draw_stars(n//3),[]
    result+=[star*3 for star in stars]
    result+=[star+' '*(n//3)+star for star in stars]
    result+=[star*3 for star in stars]
    return result
print("\n".join(draw_stars(n)))
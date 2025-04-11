import sys
input=lambda:sys.stdin.readline().rstrip()
ds,ys=map(int,input().split())
dm,ym=map(int,input().split())
sun_yr=ys-ds
moon_yr=ym-dm
while sun_yr!=moon_yr:
    if sun_yr<moon_yr:
        sun_yr+=ys
    else:
        moon_yr+=ym
print(sun_yr)
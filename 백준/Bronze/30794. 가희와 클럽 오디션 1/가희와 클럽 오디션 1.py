import sys
input=lambda:sys.stdin.readline().rstrip()
lv,verd=input().split()
asm={"miss":0,"bad":200,"cool":400,"great":600,"perfect":1000}
print(asm[verd]*int(lv))
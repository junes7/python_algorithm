import sys
input=lambda:sys.stdin.readline().rstrip()
equ=""
for _ in range(int(input())*2-1):
    equ+=input()
equ=equ.replace('/','//')
print(eval(equ))
import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    x=float(input())
    if x==-1.0: break
    print(f'Objects weighing {x:0.2f} on Earth will weigh {x*0.167:0.2f} on the moon.')
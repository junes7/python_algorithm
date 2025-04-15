import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
p=int(input())
if n>=20:
    print(f"{min(p*0.75,0 if p-2000<0 else p-2000,p*0.9,0 if p-500<0 else p-500):.0f}")
elif n>=15:
    print(f"{min(0 if p-2000<0 else p-2000,p*0.9,0 if p-500<0 else p-500):.0f}")
elif n>=10:
    print(f"{min(p*0.9,0 if p-500<0 else p-500):.0f}")
elif n>=5:
    print(0 if p-500<0 else p-500)
else:
    print(p)
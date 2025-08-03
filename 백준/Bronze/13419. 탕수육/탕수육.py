import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    wave=input()
    if len(wave)%2!=0:
        print(wave[0::2],wave[1::2],sep='')
        print(wave[1::2],wave[0::2],sep='')
    else:
        print(wave[0::2],wave[1::2],sep="\n")
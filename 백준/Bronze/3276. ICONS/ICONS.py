import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
row,col=0,0
while True:
    if row*col>=n: break
    if row<=col:
        row+=1
    else:
        col+=1
print(row,col)
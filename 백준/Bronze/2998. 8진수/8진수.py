import sys
input=lambda:sys.stdin.readline().rstrip()
bi=input()
while len(bi)%3:
    bi='0'+bi
arr=""
for i in range(len(bi)//3):
    arr+=str(int(bi[3*i:3*(i+1)],2))
print(arr)
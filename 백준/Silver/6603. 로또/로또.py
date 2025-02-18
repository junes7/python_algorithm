import sys
input=lambda:sys.stdin.readline().rstrip()
def generate_lottos(numbers,selected,start,target):
    if len(selected)==target:
        print(*(selected))
        return
    for i in range(start,len(numbers)):
        selected.append(numbers[i])
        generate_lottos(numbers,selected,i+1,target)
        selected.pop()
while True:
    input_data=list(map(int,input().split()))
    if input_data[0]==0: break
    numbers=input_data[1:]
    generate_lottos(numbers,[],0,6)
    print()
import sys
input=lambda:sys.stdin.readline().rstrip()
dic = {"black":'0', "brown":'1', "red":'2', "orange": '3',
    "yellow": '4', "green": '5', "blue": '6',
    "violet": '7', "grey": '8', "white": '9'}
st=""
for _ in range(2):
    st+=dic.get(input(),'')
print(int(st)*10**int(dic.get(input(),'')))
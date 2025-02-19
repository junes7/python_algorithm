import sys
input=lambda:sys.stdin.readline().rstrip()
def find_cards(n,cards,m,numbers):
    card_set,result=set(cards),[]
    for num in numbers:
        result+=[1 if num in card_set else 0]
    return result
n=int(input())
cards=list(map(int,input().split()))
m=int(input())
numbers=list(map(int,input().split()))
print(*find_cards(n,cards,m,numbers))
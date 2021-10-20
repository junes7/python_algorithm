# use map method and arithmetic operator
n1,n2,n3=map(int, input().split())
print(int((n1+n2+n3)/3))
# use list and sum method
data=list(map(int, input().split()))
print(int(sum(data)/3))
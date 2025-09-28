a,b = map(int,input().rstrip().split())
def conversion(a,b):
    c="0123456789ABCDEF"
    if a<b:
        return str(c[a])
    else:
        return conversion(a//b,b)+str(c[a%b])
print(conversion(a,b))
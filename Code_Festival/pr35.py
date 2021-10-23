# use factory function
# get number to the power of two, three, and four
def one(n):
    def two(value):
        sq=value**n;
        return sq;
    return two
a=one(2)
b=one(3)
c=one(4)
print(a(10))
print(b(10))
print(c(10))

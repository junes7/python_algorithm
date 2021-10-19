# print star tree
# n=int(input())
# for i in range(n):
#     str=''
#     for j in range(2*n):
#         if j>=n-1-i and j<=n-1+i:
#             str+='*'
#         else:
#             str+=' '
#     print(str)

# other method
n=int(input())
for i in range(1,n+1):
    print(" "*(n-i)+"*"*(2*i-1));
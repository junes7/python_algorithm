import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
print("Gnomes:")
for _ in range(n):
    arr=[*map(int,input().split())]
    arr_sort=sorted(arr)
    arr_sort_rev=sorted(arr,reverse=True)
    print("Ordered" if arr==arr_sort or arr==arr_sort_rev else "Unordered")
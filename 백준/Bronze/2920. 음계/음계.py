import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[*map(int,input().split())]
arr_copy,arr_copy_rev=sorted(arr),sorted(arr,reverse=True)
print("ascending" if arr_copy==arr else "descending" if arr_copy_rev==arr else "mixed")
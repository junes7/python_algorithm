def merge_sort(arr, temp, left, right):
    if left>=right:
        return 0
    mid = (left + right) // 2
    inv_count = 0
    inv_count += merge_sort(arr, temp, left, mid)
    inv_count += merge_sort(arr, temp, mid + 1, right)
    inv_count += merge(arr, temp, left, mid, right)
    return inv_count
def merge(arr, temp, left, mid, right):
    i = left
    j = mid + 1
    k = left
    inv_count = 0
    while i <= mid and j <= right:
        if arr[i]<=arr[j]:
            temp[k] = arr[i]
            i += 1
        else:
            temp[k] = arr[j]
            j += 1
            inv_count += (mid-i+1)
        k += 1
    while i <= mid:
        temp[k] = arr[i]
        i += 1
        k += 1
    while j <= right:
        temp[k] = arr[j]
        j += 1
        k += 1
    for i in range(left, right + 1):
        arr[i] = temp[i]
    return inv_count
import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=list(map(int,input().split()))
temp=[0]*(n+1)
print(merge_sort(arr,temp,0,n-1))
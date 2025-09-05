import sys
input=lambda:sys.stdin.readline().rstrip()
def scicomlove_2022(N):
    slice_num = N % 10
    scicomlove = "SciComLove"
    return scicomlove[slice_num:] + scicomlove[:slice_num]
if __name__ == "__main__":
    N = int(input())
    print(scicomlove_2022(N=N))
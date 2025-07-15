import sys
input=lambda:sys.stdin.readline().rstrip()
def max_meetings(meetings):
    # 회의 시간을 끝나는 시간 기준으로 정렬
    meetings.sort(key=lambda x:(x[1],x[0]))
    count = 0
    last_end_time = 0
    for start, end in meetings:
        if start>=last_end_time:
            count += 1
            last_end_time=end
    return count
def main():
    n = int(input())
    meetings = [[*map(int,input().split())] for i in range(n)]
    print(max_meetings(meetings))
if __name__ == "__main__":
    main()
def solution(phone_book):
    answer = True
    phone_book.sort()
    for i in range(1, len(phone_book)):
        L = len(phone_book[i-1])
        if phone_book[i-1][:L] == phone_book[i][:L]:
            return False
    return answer
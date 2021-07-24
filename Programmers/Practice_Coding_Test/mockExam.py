# 모의고사(mock Exam)
# 수포자는 수학을 포기한 사람의 준말입니다. 수포자 삼인방은 모의고사에 수학
# 문제를 전부 찍으려 합니다. 수포자는 1번 문제부터 마지막 문제까지 다음과
# 같이 찍습니다.
# 1번 수포자가 찍는 방식: 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ...
# 2번 수포자가 찍는 방식: 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
# 3번 수포자가 찍는 방식: 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...
# 1번 문제부터 마지막 문제까지의 정답이 순서대로 들은 배열 answers가 
# 주어졌을 때, 가장 많은 문제를 맞힌 사람이 누구인지 배열에 담아 return
# 하도록 solution 함수를 작성해주세요.
# 시험은 최대 10,000 문제로 구성되어있습니다. 문제의 정답은 1, 2, 3, 4, 5
# 중 하나입니다. 가장 높은 점수를 받은 사람이 여럿일 경우, return하는 값을
# 오름차순 정렬해주세요.
# 수포자 1은 모든 문제를 맞혔습니다.
# 수포자 2는 모든 문제를 틀렸습니다.
# 수포자 3은 모든 문제를 틀렸습니다.
# 따라서 가장 문제를 많이 맞힌 사람은 수포자 1입니다.
# 모든 사람이 2문제씩을 맞췄습니다.
# method 1
# def solution(answers):
#     answer = []
#     d1 = []
#     d2 = []
#     d3 = []
#     cnt1, cnt2, cnt3 = 0, 0, 0
#     max, t = 0, 0
#     for i in range(len(answers)):
#         if (i+1) % 5 == 0:
#             t += 1
#             d1.append(t)
#             t = 0
#         else:
#             t += 1
#             d1.append(t)
#     for i in range(len(answers)):
#         if answers[i] == d1[i]:
#             cnt1 += 1
#         else:
#             continue
#     if max < cnt1:
#         max = cnt1
#     t = 1
#     for i in range(len(answers)):
#         if i % 2 == 0:
#             d2.append(2)
#         else:
#             if (i+1) % 8 == 0:
#                 d2.append(t)
#                 t = 1
#             else:
#                 if t == 1:
#                     d2.append(t)
#                     t += 2
#                 else:
#                     d2.append(t)
#                     t += 1
#     for i in range(len(answers)):
#         if answers[i] == d2[i]:
#             cnt2 += 1
#         else:
#             continue
#     if max < cnt2:
#         max = cnt2
#     t = 1
#     for i in range(len(answers)):
#         if (i+1) % 10 == 1 or (i+1) % 10 == 2:
#             d3.append(3)
#         else:
#             if (i+1) % 10 == 9 or (i+1) % 10 == 0:
#                 d3.append(t)
#                 if (i+1) % 10 == 0:
#                     t = 1
#             else:
#                 if (i+1) % 10 == 5 or (i+1) % 10 == 6:
#                     d3.append(t)
#                     if (i+1) % 10 == 6:
#                         t += 2
#                 else:
#                     if (i+1) % 10 <= 8:
#                         d3.append(t)
#                         if (i+1) % 10 == 4:
#                             t += 1
#                         elif (i+1) % 10 == 8:
#                             t += 1
#     for i in range(len(answers)):
#         if answers[i] == d3[i]:
#             cnt3 += 1
#         else:
#             continue
#     if max < cnt3:
#         max = cnt3
#     answer_temp = [cnt1, cnt2, cnt3]
#     for person, score in enumerate(answer_temp):
#         if score == max:
#             answer.append(person+1)
#     return answer
# method 2
def solution(answers):
    answer = []
    d1 = [1, 2, 3, 4, 5]
    d2 = [2, 1, 2, 3, 2, 4, 2, 5]
    d3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    cnt1, cnt2, cnt3 = 0, 0, 0
    for i in range(len(answers)):
        if answers[i] == d1[i % len(d1)]:
            cnt1 += 1
        if answers[i] == d2[i % len(d2)]:
            cnt2 += 1
        if answers[i] == d3[i % len(d3)]:
            cnt3 += 1
    answer_temp = [cnt1, cnt2, cnt3]
    for person, score in enumerate(answer_temp):
        if score == max(answer_temp):
            answer.append(person+1)
    return answer
answers = list(map(int, input().split()))
print(solution(answers))
import sys
input=lambda:sys.stdin.readline().rstrip()
card_line = input()
card_count_dict = dict()
for i in range(0, len(card_line), 3):
    card = card_line[i:i + 3]
    if card in card_count_dict:
        card_count_dict[card] += 1
    else:
        card_count_dict[card] = 1
duplication_list = [count for count in card_count_dict.values() if count != 1]
if len(duplication_list) == 0:
    P, K, H, T = 13, 13, 13, 13
    for card in card_count_dict.keys():
        if card[0] == 'P':
            P -= 1
        elif card[0] == 'K':
            K -= 1
        elif card[0] == 'H':
            H -= 1
        elif card[0] == 'T':
            T -= 1   
    print(P, K, H, T)
else:
    print('GRESKA')
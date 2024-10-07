def solution(code):
#     answer,mode='',0
#     for i in range(len(code)):
#         if code[i]=='1':
#             mode^=1
#         else:
#             answer+=code[i] if i%2==mode else ''
            
#     return "EMPTY" if len(answer)==0 else answer
    r=''.join(code.split('1'))[::2] or 'EMPTY'
    return r
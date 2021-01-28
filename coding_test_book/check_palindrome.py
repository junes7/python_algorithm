# inputString = "abcba"
inputString = "abca"
# result = False
inputString = list(inputString)
# method 1 use if, else statement
# if inputString == inputString[::-1]:
#     print(True)
# else:
#     print(False)
# method 2 use ternary operators
result = (True if inputString == inputString[::-1] else False)
print(result)
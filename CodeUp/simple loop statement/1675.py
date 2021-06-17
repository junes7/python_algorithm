# 시저의 암호 1
# 암호학에서 시저 암호(Caesar cipher)는 가장 오래된
# 암호 중 하나이고, 가장 대표적인 대치(substitution)
# 암호로서 평문 문자를 다른 문자로 일대일 대응 시켜
# 암호문을 만들어 낸다. 시저 암호는 알파벳을 3글자씩
# 밀려서 쓰면서 문장을 만들었다. 실제 시저는 부하인
# 브루투스에게 암살되기 전에 키케로에게 다음과 같은
# 암호문을 보냈다고 한다. || 암호문 | 원문
# qhyhu wuxvw euxwxv | never trust brutus
# 암호문을 원문으로 바꾸는 원리는, 암호문에 쓰인 
# 알파벳보다 3만큼 이동한 알파벳으로 치환하면 된다.
# method 1
s = list(input())
for i in range(len(s)):
    n = ord(s[i])
    if 100 <= n and n <= 122:
        s[i] = chr(n - 3)
    elif 97 <= n and n <= 99:
        s[i] = chr(n + 23)
    else:
        continue
st = ''.join(s)
print(st)
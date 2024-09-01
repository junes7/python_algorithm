def solution(str1, str2):
    r=0
    s1,s2=[],[]
    no,deno=0,0
    # 두 글자씩 끊어서 다중집합 원소 생성, 영문자 쌍만 유효
    for i in range(0,len(str1)-1):
        # 영문자 쌍인지 확인
        if str1[i:i+2].isalpha():
            s1+=[str1[i:i+2].lower()]
    for j in range(0,len(str2)-1):
        # 영문자 쌍인지 확인
        if str2[j:j+2].isalpha():
            s2+=[str2[j:j+2].lower()]
    # 중복 요소 제거해 합친 후
    for e in set(s1+s2):
        # 각 집합 별 요소 개수 센후 최소값은 분수, 최대값은 분모
        no+=min(s1.count(e),s2.count(e))
        deno+=max(s1.count(e),s2.count(e))
    # 유사도 값 계산
    r=int(no/deno*65536) if deno else 65536
    return r
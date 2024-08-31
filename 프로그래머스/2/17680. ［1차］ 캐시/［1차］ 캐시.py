def solution(cacheSize, cities):
    r,cache=0,[]
    '''
    cacheSize가 0이면 모든 도시들에 대해 cache miss가 되므로
    cities 리스트 길이*5를 반환해주었습니다.
    '''
    if cacheSize==0:
        r=len(cities)*5
    else:
        for city in cities:
            # 입력값 대소문자 구분으로 인한 오류를 없애기 위해 소문자로 변환해 주었습니다.
            city=city.lower()
            # cache에 도시가 존재할 때
            if city in cache:
                '''
                가장 최근에 사용한 아이템으로 놓기 위해 기존의 도시 값을 삭제하고
                가장 마지막 요소로 삽입하고 cache hit이므로 1을 더해줍니다.
                '''
                cache.remove(city)
                cache+=[city]
                r+=1
            # cache에 도시가 존재하지 않을 때
            else: # if city not in cache
                '''
                cache 리스트 길이가 cacheSize보다 크거나 같을 때
                가장 오랫동안 참조되지 않은 요소(가장 앞에 있는 요소)를 제거해
                요소를 추가할 공간 마련해준 후 가장 마지막 요소로 도시 삽입해주고
                cache miss이므로 현재 실행시간에 5를 더해줍니다.
                ''' 
                if len(cache)>=cacheSize:    
                    cache.pop(0)
                # 가장 마지막 요소로서 도시 삽입합니다.
                cache+=[city]
                r+=5
    return r
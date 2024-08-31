def solution(cacheSize, cities):
    r,cache=0,[]
    if cacheSize==0:
        r=len(cities)*5
    else:
        for city in cities:
            city=city.lower()
            if city in cache:
                cache.remove(city)
                cache+=[city]
                r+=1
            else: # if city not in cache
                if len(cache)>=cacheSize:
                    cache.pop(0)
                cache+=[city]
                r+=5
    return r
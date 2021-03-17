# 파이썬 코딩의 기술



### 5. 시퀀스를 슬라이스하는 방법을 알자(Let's figure out how to slice a sequence)

* 시퀀스를 슬라이스해서 조각으로 만들면 최소한의 노력으로 시퀀스 아이템의 부분집합(subset)에 접근할 수 있다. 가장 간단한 슬라이싱 대상은 내장 타입인 list, str, bytes이다. `__getitem__` 과 `__setitem__`이라는  특별한 메서드를 구현하는 파이썬의 클래스에도 슬라이싱을 적용할 수 있다.
* 슬라이싱 문법의 기본 형태는 somelist[start:end]이며, 여기서 start 인덱스는 포함되고 end 인덱스는 제외된다.

```python
a = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
print('First four:', a[:4])
print('Last four:', a[-4:])
print('Middle two:', a[3:-3])
# 리스트의 처음부터 슬라이스할 때는 보기 편하게 인덱스 0을 생략한다.
assert a[:5] == a[0:5]
# 리스트의 끝까지 슬라이스할 때도 마지막 인덱스는 넣지 않아도 되므로 생략한다.
assert a[5:] == a[5:len(a)]
print(a[:])
print(a[:5])
print(a[:-1])
print(a[4:])
print(a[-3:])
print(a[2:5])
print(a[2:-1])
print(a[-3:-1])   
```

* 슬라이싱은 start와 end 인덱스가 리스트의 경계를 벗어나도 적절하게 처리한다. 덕분에 입력 시퀀스에 대응해 철할 최대 길이를 코드로 쉽게 설정할 수 있다.

first_twenty_items = a[:20]

last_twenty_items = a[-20:]

※ Note 리스트의 인덱스를 음수 변수로 지정하면 슬라이싱으로 뜻밖의 결과를 얻는 몇 가지 상황 중 하나가 발생하니 주의해야 한다. 예를 들어 somelist[-n:] 이라는 구문은 somelist[-3:]처럼 n이 1보다 클 때는 제대로 동작한다. 그러나 n이 0이어서 somelist[-0:]이 되면 원본 리스트의 복사본을 만든다.

슬라이싱의 결과는 완전히 새로운 리스트다. 물론 원본 리스트에 들어 있는 객체에 대한 참조는 유지된다. 하지만 슬라이스한 결과를 수정해도 원본 리스트에 아무런 영향을 미치지 않는다.



#### 핵심 정리

* 너무 장황하지 않게 하자. 즉, start 인덱스에 0을 설정하거나 end 인덱스에 시퀀스의 길이를 설정하지 말자.
* 슬라이싱은 범위를 벗어난 start나 end 인덱스를 허용하므로 a[:20]이나 a[-20]처럼 시퀀스의 앞쪽이나 뒤쪽 경계에 놓인 슬라이스를 표현하기가 쉽다.
* list 슬라이스에 할당하면 원본 시퀀스에 지정한 범위를 참조 대상의 내용으로 대체한다(길이가 달라도 동작한다).



### 6. 한 슬라이스에 start, end, stride(간격)를 함께 쓰지 말자(Do not write start, end, stride in one slide)

```python
a = ['red', 'orange', 'yellow', 'green', 'blue', 'purple']
odds = a[::2]
evens = a[1::2]
print(odds)
print(evens)



```

* 문제는 stride 문법이 종종 예상치 못한 동작을 해서 버그를 만들어내기도 한다는 점이다. 예를 들어 파이썬에서 바이트 문자열을 역순으로 만드는 일반적인 방법은 스트라이드 -1로 문자열을 슬라이스하는 것이다.

```python
x = b'mongose'
y = x[::-1]
print(y)

```




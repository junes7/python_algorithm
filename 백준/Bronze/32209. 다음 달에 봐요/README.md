# [Bronze III] 다음 달에 봐요 - 32209 

[문제 링크](https://www.acmicpc.net/problem/32209) 

### 성능 요약

메모리: 1112 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학

### 제출 일자

2025년 5월 31일 18:50:19

### 문제 설명

<p>월간 향유회는 여러 명의 출제진과 검수진이 본인이 가능한 일정에 맞추어 문제를 만들고 검수하는 형태로 운영이 되고 있다.</p>

<p>출제진은 아이디어가 떠오를 때마다 <strong>문제 포럼</strong>에 본인의 아이디어를 기록해 두고, 매달 대회가 있을 때마다 <strong>문제 포럼</strong>에서 몇 개의 문제를 선제하여 사용한다. 선제는 보통 이전 달 대회가 끝난 직후 이루어지며, 선제된 문제에 대한 검수 과정을 월말까지 거치게 된다.</p>

<p>월간 향유회의 운영 방식을 알았으니 이제 아래의 간단한 문제를 풀어 보도록 하자.</p>

<p>입력으로 $Q$개의 이벤트가 시간 순서대로 주어지며, 다음 2가지 형태 중 하나로 주어진다.</p>

<ul>
	<li><span style="color:#e74c3c;"><code>1 x</code></span>: 출제진이 $x$개의 문제를 <strong>문제 포럼</strong>에 추가한다.</li>
	<li><span style="color:#e74c3c;"><code>2 y</code></span>: 대회가 열려 $y$개의 문제를 사용한다.</li>
</ul>

<p>2번 이벤트에서 $y$개의 문제를 사용하려고 했지만 <strong>문제 포럼</strong>에 사용되지 않은 문제가 $y$개 미만인 경우 월간 향유회는 즉시 해산을 선언하게 된다.</p>

<p>처음에는 <strong>문제 포럼</strong>에 어떠한 문제도 존재하지 않았다고 할 때, 이벤트가 모두 종료된 후 월간 향유회가 해산을 피할 수 있었는지 구해보자.</p>

### 입력 

 <p>첫 번째 줄에 이벤트의 개수 $Q$가 주어진다. ($1 \le Q \le 10$)</p>

<p>두 번째 줄부터 $Q$개의 줄에 걸쳐 이벤트의 내용이 주어진다. ($1 \le x, y \le 10$)</p>

### 출력 

 <p>월간 향유회가 도중에 해산을 선언하였다면 <span style="color:#e74c3c;"><code>Adios</code></span>를 출력한다. 그렇지 않았다면 <span style="color:#e74c3c;"><code>See you next month</code></span>를 출력한다.</p>


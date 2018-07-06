# 삽입 정렬

## 삽입 정렬 설명

![InsertionSort](https://github.com/becomingmacker/Cpp-Algorithm/blob/master/Insertion%20Sort/InsertionSort.png)

정렬이란 숫자 배열을 오름차순 또는 내림차순으로 순서대로 나열하는 것을 의미합니다. 그 중 삽입 정렬(Insertion Sort)는 숫자 배열의 모든 요소를 앞에서부터 차례대로 이미 정렬된 배열 부분과 비교하여, 자신의 위치를 찾아 삽입함으로써 정렬을 완성하는 알고리즘입니다.

사진과 문제를 참고하면 조금 더 깊은 이해가 가능합니다.

## 삽입 정렬 문제

출처 : [백준 알고리즘](https://www.acmicpc.net/problem/2750)

### 문제

N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

### 입력

첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 절대값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.

### 출력

첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.

### 풀이

[문제 소스코드](https://github.com/becomingmacker/Cpp-Algorithm/blob/master/Insertion%20Sort/InsertionSortQ.cpp)
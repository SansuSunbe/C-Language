
- 조건식
	- 참 또는 거짓, 둘 중 하나가 나오는 식
	- 참 또는 거짓이라는 값.

- C언어에서의 참과 거짓을 나타내는 값
	- 거짓 : 0
	- 참 : 0 이외의 모든 수 -> 1이라는 정수로 나타냄

- 연산자
	- 관계 연산자
		- == : 같다
		- != : 같지 않다
		- >, < : 초과, 미만(값 포함X)
		- >=, <= : 이상, 이하(값 포함O)
	- 논리 연산자 : 두 개 이상의 조건식을 연결할 때
		- && : AND, 두 조건식 모두 참일 때 참 -> A && B
		- || : 둘 중 하나라도 참이면 참 -> A || B
	- 단항 연산자
		- ! : NOT, 거짓을 참으로, 참을 거짓으로 변경, !A(A가 true면 false, false면 true)
	- 삼항 연산자
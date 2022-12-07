#include <stdio.h>

main(){
	int n;
	n = 10;
	int *p;
	p = &n;
	 
	// p에 n의 주소값 지정
	//p와 n 이 밀접한 관련을 가짐 
	
	printf("%d", *p);
	
	

	
	return 0;
}
/*
	1. 변수선언 (자료형 + 변수형)
		int *x; 
	2. 대입연산자 값 할당	
		x = &n (일반값이 아니라 주소값을 줘야함)
	 
*/

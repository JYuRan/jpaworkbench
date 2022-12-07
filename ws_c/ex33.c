#include <stdio.h>

typedef struct{		// 사용자가 자료형을 만들 수 있음, 사용자 정의 자료형
					// 자바의 클래스가 C 구조체의 확장버전 
	
	int n1;
	int n2;
	float f1;
	
}P;



int main(){
	
	P a;			//P는 자료형 a는 변수 
	a.n1 = 30;
	a.n2 = 20;
	
	printf("%d", a.n1);
	
	
	
	return 0;
}

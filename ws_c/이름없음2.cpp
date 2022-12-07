#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int f1(int n){

	return n;
}
int plus(int n1, int n2){
//덧셈 
	return n1 + n2;
}
int minus(int n1, int n2){
//뺄셈 
	return n1 - n2;
}
int multiplication(int n1, int n2){
//곱셈 
	return n1 * n2;
}
int division(int n1, int n2){
//나눗셈  
	return n1 / n2;
}

void insa(){
	printf("안녕하세요.");
	
}

int main(){
	printf("f1의 숫자 출력	 	ex10 :		 %2d\n",f1(10));
	printf("두 수의 합  출력	ex10, 5	:	 %2d\n",plus(10, 5));
	printf("두 수의 차  출력 	ex10, 5 :	 %2d\n",minus(10, 5));
	printf("두 수의 곱 출력		ex10, 5 :	 %2d\n",multiplication(10, 5));
	printf("두 수의 몫 출력		ex10, 5 :	 %2d\n",division(10, 5));

	insa();
// 값 자릿수 맞으면 스트라이크, 	
	return 0;
}

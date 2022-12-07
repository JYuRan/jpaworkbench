#include <stdio.h>

//1. 3이라는 값을 처리결과로 내주는 함수를 만드시오 
int f1(){
		
	return 3;
}

//2. 함수에 숫자가 주어지면 숫자에 7 더한값을 결과로 내어주는 함수 
int add7(int num){
	
	num = num + 7;
	
	
	
	return num;
}

int main(){
	
	int one = f1();			//무조건 3 출력 
	int two = add7(one);	//더하기 7 

	printf("%d", two);		// 3 + 7 = 10
	
	return 0;
} 

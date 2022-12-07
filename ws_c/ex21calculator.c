#include <stdio.h>

int plus(int n1, int n2){
	int result = n1 + n2;
	return result;
}

int minus(int n1, int n2){
	int result = n1 - n2;
	return result;
}

int mault(int n1, int n2){
	int result = n1 * n2;
	return result;
}
double division(double n1, double n2){
	double result = n1 / n2;
	return result;
	
	
}



int main(){
	int num1, num2;
	int select;
	double result;
	
	printf("---- 계산기 V1.0 ----\n");
	printf(">>연산에 사용될 첫번째 수를 입력하세요 : ");
	scanf("%d", &num1);
	printf("\n>>연산에 사용될 두번째 수를 입력하세요 : ");
	scanf("%d", &num2);
	printf("\n>>1.덧셈 2.뺄셈 3.곱셈 4.나눗셈\n    번호 중 하나를 선택하세요 : ");
	scanf("%d", &select);
	switch(select){
		case 1: 
			result = plus(num1, num2);
			break;
		case 2: 
			result = minus(num1, num2);
			break;
		case 3:
		 	result = mault(num1, num2);
			break;
		case 4:
			while(num1 == 0 || num2 == 0){
				printf("\n**0이 아닌 값을 입력해 주세요.**\n\n");
				
				printf(">>연산에 사용될 첫번째 수를 입력하세요 : ");
				scanf("%d", &num1);
				printf("\n>>연산에 사용될 두번째 수를 입력하세요 : ");
				scanf("%d", &num2);
			}
			result = division(num1, num2);
			break;
			
		default: 
			break;	
	}
	
	
	if(select == 4){
		printf("\n>>결과 : %.1f", result);
	}else{
		printf("\n>>결과 : %.0f", result);
	}
	
	
	
	
	
	
	return 0;
}

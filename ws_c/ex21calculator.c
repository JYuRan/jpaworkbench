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
	
	printf("---- ���� V1.0 ----\n");
	printf(">>���꿡 ���� ù��° ���� �Է��ϼ��� : ");
	scanf("%d", &num1);
	printf("\n>>���꿡 ���� �ι�° ���� �Է��ϼ��� : ");
	scanf("%d", &num2);
	printf("\n>>1.���� 2.���� 3.���� 4.������\n    ��ȣ �� �ϳ��� �����ϼ��� : ");
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
				printf("\n**0�� �ƴ� ���� �Է��� �ּ���.**\n\n");
				
				printf(">>���꿡 ���� ù��° ���� �Է��ϼ��� : ");
				scanf("%d", &num1);
				printf("\n>>���꿡 ���� �ι�° ���� �Է��ϼ��� : ");
				scanf("%d", &num2);
			}
			result = division(num1, num2);
			break;
			
		default: 
			break;	
	}
	
	
	if(select == 4){
		printf("\n>>��� : %.1f", result);
	}else{
		printf("\n>>��� : %.0f", result);
	}
	
	
	
	
	
	
	return 0;
}

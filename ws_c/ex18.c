#include <stdio.h>

//1. 3�̶�� ���� ó������� ���ִ� �Լ��� ����ÿ� 
int f1(){
		
	return 3;
}

//2. �Լ��� ���ڰ� �־����� ���ڿ� 7 ���Ѱ��� ����� �����ִ� �Լ� 
int add7(int num){
	
	num = num + 7;
	
	
	
	return num;
}

int main(){
	
	int one = f1();			//������ 3 ��� 
	int two = add7(one);	//���ϱ� 7 

	printf("%d", two);		// 3 + 7 = 10
	
	return 0;
} 

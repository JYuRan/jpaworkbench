#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int f1(int n){

	return n;
}
int plus(int n1, int n2){
//���� 
	return n1 + n2;
}
int minus(int n1, int n2){
//���� 
	return n1 - n2;
}
int multiplication(int n1, int n2){
//���� 
	return n1 * n2;
}
int division(int n1, int n2){
//������  
	return n1 / n2;
}

void insa(){
	printf("�ȳ��ϼ���.");
	
}

int main(){
	printf("f1�� ���� ���	 	ex10 :		 %2d\n",f1(10));
	printf("�� ���� ��  ���	ex10, 5	:	 %2d\n",plus(10, 5));
	printf("�� ���� ��  ��� 	ex10, 5 :	 %2d\n",minus(10, 5));
	printf("�� ���� �� ���		ex10, 5 :	 %2d\n",multiplication(10, 5));
	printf("�� ���� �� ���		ex10, 5 :	 %2d\n",division(10, 5));

	insa();
// �� �ڸ��� ������ ��Ʈ����ũ, 	
	return 0;
}

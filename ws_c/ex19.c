#include <stdio.h>

//1. �Լ� ������1
//	�Լ��̸� : f01
//	�Է��ڷ� ����
//	��ȯ�ڷ� ���� 
void f01(){
	printf("Hello\n");
}

//2. �Լ� ������2 
//	�Լ��̸� : f02
//	�Է��ڷ� ������ n1, n2
//	��ȯ�ڷ� n1+n2�� ����� result 
int f02(int n1, int n2){
	
	int result;
	result = n1 + n2;
	
	
	return result;	
}

//3. �Լ� ������3 
//	�Լ��̸� : printInsa
//	�Է��ڷ� ����
//	��� : printf�� ��� 
//	��ȯ�ڷ� ����  
void printInsa(){
	printf("�ȳ��ϼ���.\n");
}

//4. �Լ� ������4
//	�Լ��̸� : linePrint
//	�Է��ڷ� ������ num 
//	��� : "="�� �Է¹��� �� ��ŭ ��� 
//	��ȯ�ڷ� ����  
int linePrint(int n, char ch){
//	while(num != 0){
//		printf("=");
//		num--;
//	}
	int i;		
	for(i=0; i<n; i++){
		printf("%c", ch);		
	}
	
	return n;
}


int main(){
	
//	f01(); 
//	int result_main = f02(3,5);
//	
//	printf("%d\n",result_main);
//	printInsa();
	int cnt = linePrint(3,'*');
	printf("\ncnt = %d\n",cnt);
//	char ch = 'a';
//	printf("\ncnt = %c\n", ch);

	
	return 0;
}

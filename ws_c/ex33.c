#include <stdio.h>

typedef struct{		// ����ڰ� �ڷ����� ���� �� ����, ����� ���� �ڷ���
					// �ڹ��� Ŭ������ C ����ü�� Ȯ����� 
	
	int n1;
	int n2;
	float f1;
	
}P;



int main(){
	
	P a;			//P�� �ڷ��� a�� ���� 
	a.n1 = 30;
	a.n2 = 20;
	
	printf("%d", a.n1);
	
	
	
	return 0;
}

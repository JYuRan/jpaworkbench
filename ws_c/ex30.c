#include <stdio.h> 

int* f(){
	int *p;
	p = (int*)malloc(sizeof(int)*10);		// p�� ũ��� 40byte�� �Ҵ��س��� 
											//int 10���� �� �� �ִ� ������ ���ο� ���� 
	printf("%d", p);
	//int Ÿ���� ������(�ּ�)�� ��ȯ�ϰڴٴ� �� 
	int A[3] = {1, 2, 3};
	
	
	return p;
}

int main(){
	
	int *x; 
	x = f();
	printf("%d %d %d", x[0], *(x+1), *(x+2));
	
	
	
	
	return 0;
}

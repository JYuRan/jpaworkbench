#include <stdio.h>

main(){
	int n;
	n = 10;
	int *p;
	p = &n;
	 
	// p�� n�� �ּҰ� ����
	//p�� n �� ������ ������ ���� 
	
	printf("%d", *p);
	
	

	
	return 0;
}
/*
	1. �������� (�ڷ��� + ������)
		int *x; 
	2. ���Կ����� �� �Ҵ�	
		x = &n (�Ϲݰ��� �ƴ϶� �ּҰ��� �����)
	 
*/
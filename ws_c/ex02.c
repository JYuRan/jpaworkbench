#include <stdio.h>

int main(){
	// �������� ���ܻ�Ȳ�� ���� �̸� ������� ��
	 
	int A;
	int B;
	int C;
	
	//���� ����� ���ÿ� �Ҵ��ϴ� �� : �����ʱ�ȭ 
	int max = 0;
	
	printf("������ �Է��ϼ���.\n");
	scanf("%d%d%d", &A,&B,&C); 
	
	if(A > B && A > C){
		max = A;
	}else if(B > C){
		max = B;
	}else{
		max = C;
	}
	printf("���� ū ���� : %d �Դϴ�.", max);
	
	
	
	
	return 0;
}


#include <stdio.h>

void arrayCopy(int *A, int *B, int n){
	
	int i;
							//p�� A�迭�ּ� ����
							//�迭�� ���������� ���ӵǾ��ֱ� ������
							//*p�� ������ �迭 ����ĭ �� ���� 
	for(i=0; i<n; i++){
		B[i] = A[i];
	}
}

int main(){
		
	int A[3] = {1, 2, 3};
	int B[3];
	int length = sizeof(A)/sizeof(int);
	
	
	arrayCopy(A,B,length);			//A,B���� �迭�� �������� �ּ��̱� ������ 
							//���ۼ�Ʈ ������ �ʾƵ� �� 
	
	printf("B[0] = %d\n",B[0]);
	printf("B[1] = %d\n",B[1]);
	printf("B[2] = %d\n",B[2]);
	
	
	
	return 0;
} 

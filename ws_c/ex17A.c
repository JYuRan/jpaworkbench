#include <stdio.h>

int main(){
	int A[10] = {12, 23, 1, 4, 43, 6, 9, 2, 3};
	
	int c = 100;			//�迭�� �� �� �ִ� ���� ����, �ּҰ� 
	int s = 0;				//�迭���� 7�� ���̰� 
	int g = 0;				//��ġ, n 
	int n = -1;				//i�� ���� , �ݺ�Ƚ�� 
	while(n < 10){
		n = n + 1;
		
		if(A[n] >= 7){
			s = A[n] - 7;
		}else{
			s = 7 - A[n];
		}
		
		if(c > s){
			c = s;
			g = n;
		}	
	}
	printf("�ٻ簪�� ��ġ�� %d �ٻ簪�� %d\n", g, A[g]);	
	

	
	
	return 0;
} 

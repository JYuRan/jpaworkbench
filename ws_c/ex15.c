#include <stdio.h>

int main(){
	
//	int array[2][3] = {
//		{1, 2, 3},
//		{4, 5, 6}
//	};
//	int i;		// �� 
//	int k;		// �� 
////	int length = 0;
////	length = sizeof(array);
//	for(i=0; i<2; i++){
//		for(k=0; k<3; k++){
//			printf("array[%d][%d] = %d\n",i ,k ,++array[i][k]);
//		}
//	}
//	
////	printf("%d",length);
//	
//	
	
	int A[5][5] = {0,};
	
	int i;	
	int k;	
	int m;
	m = 0;
	
	printf("2���� �迭�� �� �߰��ϱ�\n");
	printf("<-- ������� �߰��ϱ� -->\n");
	for(i=0; i<5; i++){
		for(k=0; k<5; k++){
			A[i][k] = A[i][k] + ++m;
			printf("%2d	",A[i][k]);
		}
		printf("\n");
	}
	printf("\n");
	
	//�迭 A�� �� �ʱ�ȭ 
	for(i=0; i<5; i++){
		for(k=0; k<5; k++){
			A[i][k] = 0;
		}
	}
	// 0,0 == 1
	// 1,0 == 2		1,1 == 3
	// 2,0 == 4		2,1 == 5	2,2 == 6
	printf("<-- ��ܽ����� �߰��ϱ� -->\n");
	printf("< ver 1 >\n");
	m = 0;
	for(i=0; i<5; i++){
		for(k=0; k<i+1; k++){
			A[i][k] = A[i][k] + ++m;
		}
		for(k=0; k<5; k++){
			printf("%2d	",A[i][k]);
		}
		printf("\n");
	}
	printf("\n");	
	
	//�迭 A�� �� �ʱ�ȭ  
	for(i=0; i<5; i++){
		for(k=0; k<5; k++){
			A[i][k] = 0;
		}
	}
	
	printf("< ver 2 >\n");
	m = 0;
	for(i=0; i<5; i++){
		for(k=0; k<i+1; k++){
			A[i][k] = A[i][k] + ++m;
			printf("%2d	",A[i][k]);
		}
		
		printf("\n");
	}
	printf("\n");	
	
	//�迭 A�� �� �ʱ�ȭ  
	for(i=0; i<5; i++){
		for(k=0; k<5; k++){
			A[i][k] = 0;
		}
	}
	
	// 3
	printf("<-- �������� �߰��ϱ� -->\n");
	i = 0;	
	k = 0;
	m = 0;
	int j; 
	
	for(i=0; i<5; i++){	
		// 2, 4, 6.. ���� �������� �߰� 
		if(i %2 == 1){
			m = m+5;
			for(k=0; k<5; k++){
				A[i][k] = A[i][k] + m--;	
			}
			m = m+5;
		}else{
			for(k=0; k<5; k++){
				A[i][k] = A[i][k] + ++m;	
			}		
		}
		//��¹� 
		for(j=0; j<5; j++){
			printf("%2d	",A[i][j]);
		}
		printf("\n");	
	}
	printf("\n");
	
	// �迭 �ʱ�ȭ 
	for(i=0; i<5; i++){
		for(k=0; k<5; k++){
			A[i][k] = 0;
		}
	}
	i = 0;	
	k = 0;
	m = 0;
	j = 0;
	 
	printf("<-- + ������׷� �߰��ϱ� -->\n");
	for(i=0; i<5; i++){
		for(k=0; k<5; k++){
			if(i % 2 == 1){
				k++;
				if(k == 4){
					k--;
				}
			}
			A[i][k] = A[i][k] + ++m;
			k = k-1+2;
		}
		for(k=0; k<5; k++){
			if(A[i][k] == 0){
				printf("	");
				continue;
			} 
			printf("%2d	",A[i][k]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}

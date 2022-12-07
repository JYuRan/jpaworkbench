#include <stdio.h>

void arrayCopy(int *A, int *B, int n){
	
	int i;
							//p에 A배열주소 복사
							//배열은 물리적으로 연속되어있기 때문에
							//*p의 옆집엔 배열 다음칸 값 있음 
	for(i=0; i<n; i++){
		B[i] = A[i];
	}
}

int main(){
		
	int A[3] = {1, 2, 3};
	int B[3];
	int length = sizeof(A)/sizeof(int);
	
	
	arrayCopy(A,B,length);			//A,B들은 배열의 물리적인 주소이기 때문에 
							//엔퍼센트 써주지 않아도 됨 
	
	printf("B[0] = %d\n",B[0]);
	printf("B[1] = %d\n",B[1]);
	printf("B[2] = %d\n",B[2]);
	
	
	
	return 0;
} 

#include <stdio.h>
int arrayCopy(){
	//ù��° �迭���� �ι�°�迭�� ���� 
}
int main(){
	
	int A[3] = {1, 2, 3};
	int B[3];
	
	int *p;
	p = A;
	
	
	B[0] = *(p);
	B[1] = *(p+1);
	B[2] = *(p+2);
	
	
	printf("1/\nB[0] = %d \nB[1] = %d \nB[2] = %d\n\n", B[0],B[1],B[2]);
	

	return 0;
} 

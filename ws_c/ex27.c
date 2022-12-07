#include <stdio.h>
int *f(int A){
	
	
	
	return A;
}
int main(){
	int A[3] = {1,2,3};
	
	int *z;
	z = f(A);
	printf("%d",z);
	
	
	
	return 0;
} 

//포인터변수 주소저장
//배열의 이름은 주소 
//배열의 주소는 상수
//포인트 

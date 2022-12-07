#include <stdio.h> 

int* f(){
	int *p;
	p = (int*)malloc(sizeof(int)*10);		// p의 크기로 40byte를 할당해놔라 
											//int 10개가 들어갈 수 있는 공간을 메인에 전달 
	printf("%d", p);
	//int 타입의 포인터(주소)를 반환하겠다는 뜻 
	int A[3] = {1, 2, 3};
	
	
	return p;
}

int main(){
	
	int *x; 
	x = f();
	printf("%d %d %d", x[0], *(x+1), *(x+2));
	
	
	
	
	return 0;
}

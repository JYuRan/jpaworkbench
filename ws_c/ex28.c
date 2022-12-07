#include <stdio.h>
// swap 함수는 주소값 두개를 받아서 교환해준다 
void swap(int *a, int *b){		//a, b는 main변수 a,b의 주소값으로 받아옴, 
								//물리적인 디스크 상의 위치 
								//(변환되면 함수내외부 상관없이 *그 주소의 값*이 수정됨) 
	int temp = *a;				//temp에 a 표면의 값 전달 (5)  
	*a = *b;					//a 표면에 b 표면의 값 전달 
	*b = temp;					//b 표면에 temp(=5) 전달 
	printf("\na = %d b = %d",*a,*b);	//	a, b 표면의 값 출력 
	
	//메모리맵으로 이해 
	//#100 #200
	//a[5] b[3]
	 
}
//변수 선언시의 * <= 이 변수의 민짜바리는 주소값을 받는 변수이다.
//변수 선언후의 * <= 이 변수의 표면의 값을 말함 

int main(){
	int a = 5;
	int b = 3;
	printf("\nswqp 전 >> a = %d b = %d",a,b);
	
	swap(&a,&b);			// a, b의 주소 전달 
	printf("\nswqp 후 >> a = %d b = %d",a,b);
	
	
	
	return 0;
}

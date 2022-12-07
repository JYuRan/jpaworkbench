#include <stdio.h>

int main(){
	int A[10] = {12, 23, 1, 4, 43, 6, 9, 2, 3};
	
	int c = 100;			//배열에 들어갈 수 있는 값의 범위, 최소값 
	int s = 0;				//배열값과 7의 차이값 
	int g = 0;				//위치, n 
	int n = -1;				//i의 역할 , 반복횟수 
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
	printf("근사값의 위치는 %d 근사값은 %d\n", g, A[g]);	
	

	
	
	return 0;
} 

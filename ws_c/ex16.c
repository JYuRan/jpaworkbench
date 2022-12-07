//1. 변수 값을 저장..(상수)
//2. 대입연산자.. 좌변, 우변, 저장
//3. 출력문...서식지정자(형식지정자) %d, %f, %c, %s
//4. 입력문... 상동... &변수이름  
//5. 제어문...조건(if, switch(case)), 반복((do)while,for) 
//6. 배열...동일한, 연속된 
// 자료구조.. 자료를 저장하는 방식...자료를 다루는 방식 

#include <stdio.h>

// 수정해서 고치기 
int main(){
	int A[5][5] = {'0',};
	
	int k = 0;
	int sw = 0;
	int i, j;
	
	for(i=0; i<5; i++){
		if(sw==0){
			for(j=0; j<5; j++){
				k = k +1;
				A[i][j] = k;
			}
			sw == 1;
			sw = 1;		//<2>
		}else{
			for(j=4; j>=0; j--){
				k = k + 1;
				A[i][j] = k;	//<1>
			}
			sw == 0;
			sw = 0;		//<3>
		}
	}	
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%2d  ",A[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}

#include <stdio.h>

int main(){
	// 현업에선 예외상황에 대해 미리 물어봐야 함
	 
	int A;
	int B;
	int C;
	
	//변수 선언과 동시에 할당하는 것 : 변수초기화 
	int max = 0;
	
	printf("정수를 입력하세요.\n");
	scanf("%d%d%d", &A,&B,&C); 
	
	if(A > B && A > C){
		max = A;
	}else if(B > C){
		max = B;
	}else{
		max = C;
	}
	printf("가장 큰 값은 : %d 입니다.", max);
	
	
	
	
	return 0;
}


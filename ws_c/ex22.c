#include <stdio.h>

int checkNumber(int num){
	if(num % 2 == 0){
		return 1;
	}else{
		return 0;
	}
}


int main(){
	
	int num;
	 
	printf("홀짝을 판별할 수 를 입력하세요.\n>> ");
	scanf("%d",&num); 
	if(checkNumber(num) == 1){
		printf("\n짝수입니다.");
	}else{
		printf("\n홀수입니다.");
	}
	
	
	
	
	return 0;
}

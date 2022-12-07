#include <stdio.h>

int main(){
	
	int n = 3;
	do{
		printf("----연습 프로그램----\n");
		printf("1. 입력하기\n");
		printf("2. 출력하기\n");
		printf("3. 조회하기\n");
		printf("---------------------\n");
		printf("0. 종료\n");
		printf("---------------------\n");
	
		printf("메뉴를 선택하세요 >> ");
	
		scanf("%d",&n);
		switch(n){
		
			case 1: printf("-> 입력하기를 선택하였습니다.\n\n\n"); break;
			case 2: printf("-> 출력하기 선택하였습니다.\n\n\n"); break;
			case 3: printf("-> 조회하기 선택하였습니다.\n\n\n"); break;
			default: printf("");	
		
		}
	}while(n != 0);	
	printf("종료됩니다.");
	
	
	
	
	return 0;
}

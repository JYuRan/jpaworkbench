#include <stdio.h>

int main(){
	int array[] = {1,1,1,1,1,1,0,1,1,1};		//배열의 초기화, 블레이스 안에 값들 
	//int a[] 이건 불가능함, 브라킷 안에 배열의 크기가 정해지지 않음 
	int num;
	int count = 0; 
	
	while(1){
		printf("마피아를 찾으세요 >> ");
		scanf("%d", &num);
		count++;
		if(array[num-1] == 0){				// 1부터 시작 
			printf("찾았다!!!\n");
			printf("시도횟수 : %d \n",count);
			break;
		} 
	}
	
	

	return 0;
} 

#include <stdio.h>

int main(){
	//배열 : 물리적으로 연속된 저장공간, 같은타입의 집합 
	// []브라킷 
	//					       0 1 2 3 4 
	// 데이터 테이블 array = [10|5|7|23|2] 
	int array[5];
	 
	array[0] = 10;
	array[1] = 5000;
	array[2] = 7;
	array[3] = 23;
	array[4] = 2;

	int i;
	int max = 0;		//최댓값 찾기 
	int min = &array[0];
	int maxIndex;
	int minIndex;
	printf("배열에 들어갈 숫자 5개를 입력하세요.\n");
	 
	for(i = 0; i < 5; i++){
		scanf("%d",&array[i]);
		printf("array[%d] = %d\n", i, array[i]); // 0~4 
		
		if(max < array[i]){
			max = array[i];
			maxIndex = i;
		}
		
		if(min > array[i]){
			min = array[i];
			minIndex = i;
		}
	} 

	printf("\n\n배열의 최댓값은 %d, 인덱스는 %d입니다.\n", max, maxIndex);
	printf("\n배열의 최소값은 %d, 인덱스는 %d입니다.", min, minIndex);
	/*
	1. Max 값을 0으로 초기화 한다.
	2. Array배열의 0번 인덱스 부터 4번 인덱스 까지 차례로
		Max변수의 값과 비교한다.
		만약 Array배열의 임의의 인덱스 값이 Max변수 값보다 크면
		Max변수 값을 Array배열의 해당 인덱스의 값으로 변경한다. 
	*/
	
	
	
	
	
	
	
	
	
//	i = 0;
//	printf("\n");
//	while(i<5){
//		printf("array[%d] = %d\n", i, array[i]); 
//		i++;
//	}
//	
//	printf("\n\n%d\n", array[0]); 
//	printf("%d\n", array[1]); 
//	printf("%d\n", array[2]); 
//	printf("%d\n", array[3]); 
//	printf("%d\n", array[4]); 
	
	
	return 0;
} 

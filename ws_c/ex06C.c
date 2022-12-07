#include <stdio.h>

int main(){
	int max = 0;
	int min = 0;
//	홀수는 odd 짝수는 even 저장 10개 입력 
	int even_array[50];
	int odd_array[50];
	int i, k;
	int num;
	int even = 0;
	int odd = 0;
	printf("배열에 들어갈 수 10개를 입력하세요.\n");
	for(i = 0; i<10; i++){
		printf("%d. ",i+1);
		scanf("%d", &num);					//입력값 10개 받기 
		
		if(num%2 == 0){						// 입력값 / 2의 나머지가 0? 
			even_array[even] = num;			// 짝수 배열에 입력하고 카운트 증가 
			even++;
		}else if(num%2 == 1){				// 입력값 / 2의 나머지가 1? 
			odd_array[odd] = num;			// 짝수 배열에 입력하고 카운트 증가 
			odd++;
		}
	}
	
	// 배열 출력 
	for(i=0; i<even; i++){
		printf("even_array[%d] = %d\n",i,even_array[i]);
	}
	
	printf("\n");
	
	for(i=0; i<odd; i++){
		printf("odd_array[%d] = %d\n",i,odd_array[i]);
	}
	
	
	
//
//	1. 입력받은 값이 짝수인지 판별한다.
//		1-1. 짝수면 even_array에
//		1-2. 홀수면 odd_array에
//	
//		int i = 0;
//		int even_current = 0;
//		int odd_current = 0;
//		
//		while (i < 10){
//			printf("Input number >>");
//			scanf("%d", &num); 
//			
//			if(num % 2 == 0){
//				//even_array에 저장
//				even_array[even_current] = num; 
//			}else{
//				//odd_array에 저장
//				odd_array[odd_current] = num; 
//			}
//			
//			i++;
//		}  
//		
//		

	
	
	

	return 0;
}
  

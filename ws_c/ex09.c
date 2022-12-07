#include <stdio.h>

int main(){
	char array[] = {1,1,1,1,1,1,0,1,1,1};
	
	int length = sizeof(int);		//4
	length = sizeof(array) / sizeof(char);			//배열의 크기를 알고싶을 때, 사이즈/자료형사이즈 
	// printf("%d\n", length);	
	
	int i;
	for(i = 0; i < length; i++){
		
	} 
	//////////////////////////////
	
	int num;
	int sum = 0;
	
	while(1){
		scanf("%d", &num);
		if(num == 0) break;
		
		if(num % 2 == 0){
			continue;			//입력받은 수가 짝수면 continue(다음문장 건너뜀) 
		}
		sum = sum + num;
	
			
	}
		
		
	printf("sum = %d\n", sum);
	return 0;
}

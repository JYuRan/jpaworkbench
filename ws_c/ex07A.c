#include <stdio.h>

int main(){
	
	// 두 개의 변수를 선언하여 각각 숫자를 입력받는다.
	//입력받은 두 수를 비교하여 같으면 "두 수는 같습니다."
	//다르면 "두 수는 다릅니다" 라고 출력한다. 
	
	//* 두 수를 비교했을 때 결과값 0 또는 1을 이용하여 
	//출력문이 표시되도록 하시오. 
	
	int num1;
	int num2;
	int result;
	while(1){
		printf("숫자를 입력하세요. >> ");
		scanf("%d",&num1);
		printf("비교할 숫자를 입력하세요. >> ");
		scanf("%d",&num2);
		result = num1 == num2;
		if(result){
			printf("두 수는 같습니다.\n\n");
		}else{
			printf("두 수는 다릅니다.\n\n");
		}
	}
	
	
	
	
	return 0;
}

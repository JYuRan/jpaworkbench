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
	 
	printf("Ȧ¦�� �Ǻ��� �� �� �Է��ϼ���.\n>> ");
	scanf("%d",&num); 
	if(checkNumber(num) == 1){
		printf("\n¦���Դϴ�.");
	}else{
		printf("\nȦ���Դϴ�.");
	}
	
	
	
	
	return 0;
}

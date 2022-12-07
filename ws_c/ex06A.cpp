#include <stdio.h>

int main(){
	
	int i = 0;
	int l = 0;
	
	for(i ; i < 3; i++){
		printf("바깥쪽 for문......\ㅜ");
		for(k; k < 5; k++){
			printf("    안쪽 for문")
		}
	}
	
	printf("\n종료"); 
	
	return 0;
}

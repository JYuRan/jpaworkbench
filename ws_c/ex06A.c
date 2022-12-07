#include <stdio.h>

int main(){
	
	int i; // 단 정보 
	int k; // 곱해지는 수 정보 
	
	for(i = 2 ; i < 10; i++){
		printf("\n----<< %d 단 >>----\n\n",i);
		for(k = 1 ; k < 10; k++){
			printf("    %d * %d = %d \n", i, k, i*k);
		}
	}
	
	printf("\n종료"); 
	
	return 0;
}

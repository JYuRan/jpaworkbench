#include <stdio.h>

int main(){
	//num = 1234;
	//A[0] = 1;
	//A[1] = 2;
	//A[2] = 3;
	//A[3] = 4;
	//num = 5974~~~~
	int i;
	int num;
	 
	printf("배열에 넣을 4자리 숫자를 입력하세요.");
	scanf("%d", &num);
	
	int one = num / 1000;								// 천의자리 
	int two = num / 100 - (one * 10);					// 백의자리 
	int three = num / 10 - (one * 100) - (two * 10);	// 십의자리
	int four = num % 10;								// 일의자리 
	
	int A[] = {one, two, three, four};
	
	printf("입력값 = %d\n\n", num);

	for(i = 0; i < 4; i++){
		printf("A[%d] = %d\n",i , A[i]);
	}

	
	return 0;
}

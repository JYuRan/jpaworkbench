#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int outRandNum(int momey){
	srand(time(NULL));
	int randNum1,randNum2,randNum3;
	int i;
	randNum1 = ((rand()%34 * rand()%178) % 3) + 1;
	randNum2 = ((rand()%148 * rand()%110) % 3) + 1;
	randNum3 = ((rand()%245 * rand()%48) % 3) + 1;
	int A[3] = {randNum1,randNum2,randNum3};
	
	for(i = 0; i < 3; i++){
		printf("%d ",A[i]);	
	}
	
	if(randNum1 == randNum2 && randNum2 == randNum3){
		momey = momey + 100;
	}else{
		momey = momey - 10;
	}
	
	return momey;
}

int main(){
	int momey = 1000;
	printf("ÀÜ¾×%d\n", momey);

	momey = outRandNum(momey);
	printf("\nÀÜ¾×%d\n", momey);
	
	
	return 0;
}

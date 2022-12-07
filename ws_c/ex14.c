//1. 변수랑? 변할 수 있는 수를 저장하는 공간 
//2. 자료형이란? 숫자 문자 등을 담을 수 있는 저장공간의 형태 
//3. 배열이란? 물리적으로 같은 자료형을 가진 자료들의 집합 
//4. 제어문(조건 : if, switch~case/반복 : for, (do)while )
//	if(조건식)
//		{실행내용}
//
//	switch(변수 등) 
//		case 1: break ~~
//		default: ; 
//
//	do {실행내용}
//	while(조건); 
//5. 입출력문(printf, scanf) 
//6. 랜덤 
//	#include <stdio.h> 
//	#include <stdlib.h>
//	#include <time.h>
//		int random_num = 0;
//		srand(time(NULL)); 
//		random_num = rand()%100 + 1; 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int hist[6] = {0,0,0,0,0,0};
	srand(time(NULL));
	int i;
	int rd_num;
	for(i=0; i<100; i++){
		rd_num = rand()%6 + 1;
		hist[rd_num - 1]++;
	}
	
	for(i=0; i<6; i++){
		printf("hist[%d](%d의 개수) : %d\n", i, i+1,hist[i]);
	}
	
	
	return 0;
} 

#include <stdio.h>

int main() {

	//	int sum = 0;
	//	sum = sum + 1;
	//	sum += 1;
	//	위의 두 개는 동일한 코드, 아직은 위의 방법으로 하기
	//
	//	printf("%d", sum);

	//배열 : 물리적으로 연속된 공간에 동일한 타입의 자료가 저장되어 있는 것

	//[]:브라킷 / {}:블레이스(블록)
	/*
	int n;
	n = 10;

	int nums[5];
	nums[0] = 1;
	nums[1] = 2;
	nums[2] = 3;
	nums[3] = 4;
	nums[4] = 5;

	printf("%d\n", nums[0]);
	*/
	
	// while
	printf("------while------\n");		
	int i = 0;
	while(i < 5){
		printf("%d. 안녕하세요..\n",(i+1));
		i = i + 1;
	}	
	
	
	
	
	
	//	for, for문 앞에서 변수타입 선언 불가 
	// 반복의 횟수를 알 수 있을 때엔 for문, 모를 땐 while 
	printf("------for------\n");
	int m;	
	for(m=0; m<5; m=m+1){
		printf("%d. 안녕하세요..\n",(m+1));
	}
	
	
	
	
	//	while문은 조건이 참일 경우 실행시작
	//	do while문은 조건이 어떻든 일단 한 번 실행시키고 봄 
	printf("------do while------\n");
	int z = 0;
	do{
		printf("%d. 안녕하세요..\n",(z+1));
		z = z + 1;
	}while(z < 5);



	return 0;
}

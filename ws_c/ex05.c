#include <stdio.h>

int main(){
	//	배열 
	int nums[5];
	
	nums[0] = 1;
	nums[1] = 2;	
	nums[2] = 3;	
	nums[3] = 4;
	nums[4] = 5;	
	
	printf("nums[%d] = %d\n", 0, nums[0]);
	printf("nums[%d] = %d\n", 1, nums[1]);
	printf("nums[%d] = %d\n", 2, nums[2]);
	printf("nums[%d] = %d\n", 3, nums[3]);
	printf("nums[%d] = %d\n", 4, nums[4]);
	
	
	//	위의 예제 반복문으로 변환 
	
	//	1. for 
	printf("\n1. for \n");
	int i = 0;
	
	for(i=0; i<5; i=i+1){
		printf("nums[%d] = %d\n", i, nums[i]);
	}
	
	//	2. while
	printf("\n2. while \n");
	int m = 0;
	
	while(m<5){
		printf("nums[%d] = %d\n", m, nums[m]);	
		m = m + 1;	
	}
	
	//	3. do while
	printf("\n3. do while \n");
	int z = 0;	
	
	do{
		printf("nums[%d] = %d\n", z, nums[z]);	
		z = z + 1;
	}while(z<5);
	
	
	// + 만약 0,2,4를 출력하고 싶다면? 
	printf("\n+1 만약 [0],[2],[4]를 출력하고 싶다면? \n");
	int s = 0;
	
	for(s=0; s<5; s=s+2){
		printf("nums[%d] = %d\n", s, nums[s]);
	}
	
	
	//	최대값/ 정렬
	printf("\n+2 만약 최대값을 뽑고 싶다면?\n");
	int max = 0;
	int x;
	for(x=0; x<5; x++){
		if(nums[x]>nums[x+1]){
		max = nums[x];
		}
	}
	printf("\n%d\n", max);
	
		
	return 0;
}

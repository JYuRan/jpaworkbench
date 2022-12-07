#include <stdio.h>

int main(){
	int nums[5];
	
	nums[0] = 11;
	nums[1] = 55;	
	nums[2] = 355;	
	nums[3] = 44;
	nums[4] = 5;	
	int nums2[5] = {0,0,0,0,0};  // 버리는 배열  
	//	최대값, 정렬
	printf("\n+3 만약 오름차순 정렬을 하고싶다면?\n");
	int max;
	int i = 0;
	int j = 0;

	for(j=0; j<5; j++){	
		for(i=0; i<5; i++){
			if(nums[j]>nums[i]){
			//	0 < 01234
			//	nums2[j] = nums[j];
				
			}else{
				nums2[j] = nums[i];
				
				nums[i] = nums[j];
				nums[j] = nums2[j];
				
			//	nums2[j] = nums[i];
			//	nums2[i] = nums[j];	
			//	nums[i] = nums2[i];
			//	nums[j] = nums2[j];	//이 코드를 쓰면 nums와 nums2가 같은 값을 가짐 
			}	
		}
		printf("%d %d %d %d %d\n",nums[0],nums[1],nums[2],nums[3],nums[4]);
	}
	

	printf("nums[%d] = %d\n", 0, nums[0]);
	printf("nums[%d] = %d\n", 1, nums[1]);
	printf("nums[%d] = %d\n", 2, nums[2]);
	printf("nums[%d] = %d\n", 3, nums[3]);
	printf("nums[%d] = %d\n", 4, nums[4]);
	
	
	
	
	return 0;
}

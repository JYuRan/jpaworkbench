#include <stdio.h>

int main(){
	int nums[5];
	
	nums[0] = 11;
	nums[1] = 525;	
	nums[2] = 355;	
	nums[3] = 44;
	nums[4] = 5232;	
		
	//	최대값/ 정렬
	printf("\n+2 만약 최대값을 뽑고 싶다면?\n");
	int max = 0;
	int min = 0;
	int i = 0;
	int j = 0;
	
	//for(j=0; j<5; j++){	
		for(i=0; i<=5; i++){
			if(nums[i]>nums[i+1] && max<nums[i]){		// nums[j]>=nums[i], i를 0-5까지 
				max = nums[i];						// 증가시킨 후 j 증가 
			}										
			//	printf("\n%d %d\n", j,i);
			if(nums[i+1]>nums[i] && min>nums[i]){ 
				min = nums[i];		
				
			}
		}
	//}
	printf("\n%d %d\n", max,min);
	
	
	
	
	
	
	
	
	
	return 0;
}

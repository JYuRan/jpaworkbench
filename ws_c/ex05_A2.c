#include <stdio.h>

int main(){
   int nums[5];
   
   nums[0] = 11;
   nums[1] = 525;   
   nums[2] = 355;   
   nums[3] = 442;
   nums[4] = 5;   
      
   //   최대값/ 정렬
   printf("\n+2 만약 최대값을 뽑고 싶다면?\n");
   int max;
   int i = 0;
  
      for(i=0; i<5; i++){				
         if(nums[i]>nums[i+1] && max<nums[i]){   
            max = nums[i];    	
         }       			   //printf("\n%d %d\n%d\n", nums[i],nums[i+1], max);                      
      }
   
   printf("\n%d\n", max);
   
   return 0;
}

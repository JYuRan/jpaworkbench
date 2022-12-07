//근사값 찾기
//배열에서 7과 가장 가까운 수를 찾으시오.

#include <stdio.h>
 
int main(){
	
	int A[10] = {12, 23, 1, 4, 43, 6, 9, 2, 3};
	int num = 11;
	int minPlus = 100; 
	int minPlusIdx;
	int minMax = 0;
	int minMaxIdx;
	int Min1, Min2;
	
	int i,j;
	printf("찾을 값을 입력하세요.>>");
	scanf("%d", &num);
	for(i=0; i<10; i++){
		//7보다 크면서 근사값 
		
		if((A[i] - num)>=0 && A[i]<minPlus){
			minPlus = A[i];	
			minPlusIdx = i;
		}else if((A[i] - num)<=0 && minMax<A[i]){
			minMax = A[i];
			minMaxIdx = i;
		}
		//7보다 작으면서 근사값 
	} 
	Min1 = minPlus - num; 
	Min2 = num - minMax; 
	
	//Min1 Min2 대소비교해서 출력 
	if(Min1>Min2){ 
		printf("%d의 근사값은 %d입니다. A[%d]",num, minMax,minMaxIdx);
	}else{
		printf("%d의 근사값은 %d입니다. A[%d]",num, minPlus,minPlusIdx);
	}
	
	
	
	
	
	printf("\n**%d  ",minPlus);
	printf("**%d  ",minMax);
	
	
	
	
	
	return 0;
} 

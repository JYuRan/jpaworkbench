//�ٻ簪 ã��
//�迭���� 7�� ���� ����� ���� ã���ÿ�.

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
	printf("ã�� ���� �Է��ϼ���.>>");
	scanf("%d", &num);
	for(i=0; i<10; i++){
		//7���� ũ�鼭 �ٻ簪 
		
		if((A[i] - num)>=0 && A[i]<minPlus){
			minPlus = A[i];	
			minPlusIdx = i;
		}else if((A[i] - num)<=0 && minMax<A[i]){
			minMax = A[i];
			minMaxIdx = i;
		}
		//7���� �����鼭 �ٻ簪 
	} 
	Min1 = minPlus - num; 
	Min2 = num - minMax; 
	
	//Min1 Min2 ��Һ��ؼ� ��� 
	if(Min1>Min2){ 
		printf("%d�� �ٻ簪�� %d�Դϴ�. A[%d]",num, minMax,minMaxIdx);
	}else{
		printf("%d�� �ٻ簪�� %d�Դϴ�. A[%d]",num, minPlus,minPlusIdx);
	}
	
	
	
	
	
	printf("\n**%d  ",minPlus);
	printf("**%d  ",minMax);
	
	
	
	
	
	return 0;
} 

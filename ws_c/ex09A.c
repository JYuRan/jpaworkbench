#include <stdio.h>

int main(){
	// �迭 Ȧ���� ��, ¦���� �� ���ϱ�
	 
	int array[] = {1, 2 ,3, 4, 5, 6, 7, 8, 9, 10};
	
	int length = sizeof(int);	
	length = sizeof(array) / sizeof(int);
		
	int i = 0;
	int evenSum = 0;
	int oddSum = 0;

//	while(1){
//		
//		if(array[i] % 2 == 0){
//			evenSum = evenSum + array[i];
//			i++;
//			printf("\n¦�� : %d\n", i);
//			continue;
//		}
//
//			oddSum = oddSum + array[i];
//			printf("\n Ȧ�� : %d\n", i);
//		
//		i++;
//		if(i > length){
//			printf("\n¦�� �� : %d\n", evenSum);
//			printf("Ȧ�� �� : %d", oddSum);
//			break;
//		}
//		
//		
//		
//	} 

	for(i = 0; i <10; i++){
		if(array[i] % 2 == 1) continue;
		evenSum = evenSum + array[i];
	} 
	
	for(i = 0; i <10; i++){
		if(array[i] % 2 == 0) continue;
		oddSum = oddSum + array[i];
	} 
	
	printf("¦�� �� : %d\n", evenSum);
	printf("Ȧ�� �� : %d", oddSum);
	
	
	return 0;
} 

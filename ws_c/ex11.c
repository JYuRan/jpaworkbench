#include <stdio.h>

	/*
	0. 출력문 
	1. 변수와 자료형
	2. 배열
	3. 조건문
	4. 반복문
	5. break, continue 
	*/
	
int main(){
	/*
	int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	2의 배수가 몇개? 3의배수 몇개? 4의배수 몇개? 
	*/
	int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int i;
	int length = sizeof(array) / sizeof(int);	
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	int count = 0;
	int num;
	
	printf("배열 안에서 배수의 갯수 구하기\nnum >> ");
	scanf("%d",&num);
	
	for(i=0; i<10; i++){
		printf("array[%d] = ",i);
		scanf("%d",&array[i]);
		
		if(array[i] > 0){
			if(array[i]%num == 0){
				count++;
			}
//			if(array[i]%2 == 0){
//				count2++;
//			}
//			if(array[i]%3 == 0){
//				count3 = count3 + 1;
//			}
//			if(array[i]%4 == 0){
//				count4 = count4 + 1;
//			}
		}
	} 
	
	printf("\narray = { ");
	for(i=0; i<length; i++){
		printf("%d ",array[i]);
	}
	printf("}\n\n");
	printf("%d의 배수 : %d개",num, count);
	//printf("2의 배수 : %d개\n3의 배수 : %d개\n4의 배수 : %d개", count2,count3,count4);

	
	
	
	
	
	
	
	return 0;
}

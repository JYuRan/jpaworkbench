#include <stdio.h>

	/*
	0. ��¹� 
	1. ������ �ڷ���
	2. �迭
	3. ���ǹ�
	4. �ݺ���
	5. break, continue 
	*/
	
int main(){
	/*
	int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	2�� ����� �? 3�ǹ�� �? 4�ǹ�� �? 
	*/
	int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int i;
	int length = sizeof(array) / sizeof(int);	
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	int count = 0;
	int num;
	
	printf("�迭 �ȿ��� ����� ���� ���ϱ�\nnum >> ");
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
	printf("%d�� ��� : %d��",num, count);
	//printf("2�� ��� : %d��\n3�� ��� : %d��\n4�� ��� : %d��", count2,count3,count4);

	
	
	
	
	
	
	
	return 0;
}

#include <stdio.h>

int main(){
	//�迭 : ���������� ���ӵ� �������, ����Ÿ���� ���� 
	// []���Ŷ 
	//					       0 1 2 3 4 
	// ������ ���̺� array = [10|5|7|23|2] 
	int array[5];
	 
	array[0] = 10;
	array[1] = 5000;
	array[2] = 7;
	array[3] = 23;
	array[4] = 2;

	int i;
	int max = 0;		//�ִ� ã�� 
	int min = &array[0];
	int maxIndex;
	int minIndex;
	printf("�迭�� �� ���� 5���� �Է��ϼ���.\n");
	 
	for(i = 0; i < 5; i++){
		scanf("%d",&array[i]);
		printf("array[%d] = %d\n", i, array[i]); // 0~4 
		
		if(max < array[i]){
			max = array[i];
			maxIndex = i;
		}
		
		if(min > array[i]){
			min = array[i];
			minIndex = i;
		}
	} 

	printf("\n\n�迭�� �ִ��� %d, �ε����� %d�Դϴ�.\n", max, maxIndex);
	printf("\n�迭�� �ּҰ��� %d, �ε����� %d�Դϴ�.", min, minIndex);
	/*
	1. Max ���� 0���� �ʱ�ȭ �Ѵ�.
	2. Array�迭�� 0�� �ε��� ���� 4�� �ε��� ���� ���ʷ�
		Max������ ���� ���Ѵ�.
		���� Array�迭�� ������ �ε��� ���� Max���� ������ ũ��
		Max���� ���� Array�迭�� �ش� �ε����� ������ �����Ѵ�. 
	*/
	
	
	
	
	
	
	
	
	
//	i = 0;
//	printf("\n");
//	while(i<5){
//		printf("array[%d] = %d\n", i, array[i]); 
//		i++;
//	}
//	
//	printf("\n\n%d\n", array[0]); 
//	printf("%d\n", array[1]); 
//	printf("%d\n", array[2]); 
//	printf("%d\n", array[3]); 
//	printf("%d\n", array[4]); 
	
	
	return 0;
} 

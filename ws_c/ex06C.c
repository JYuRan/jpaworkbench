#include <stdio.h>

int main(){
	int max = 0;
	int min = 0;
//	Ȧ���� odd ¦���� even ���� 10�� �Է� 
	int even_array[50];
	int odd_array[50];
	int i, k;
	int num;
	int even = 0;
	int odd = 0;
	printf("�迭�� �� �� 10���� �Է��ϼ���.\n");
	for(i = 0; i<10; i++){
		printf("%d. ",i+1);
		scanf("%d", &num);					//�Է°� 10�� �ޱ� 
		
		if(num%2 == 0){						// �Է°� / 2�� �������� 0? 
			even_array[even] = num;			// ¦�� �迭�� �Է��ϰ� ī��Ʈ ���� 
			even++;
		}else if(num%2 == 1){				// �Է°� / 2�� �������� 1? 
			odd_array[odd] = num;			// ¦�� �迭�� �Է��ϰ� ī��Ʈ ���� 
			odd++;
		}
	}
	
	// �迭 ��� 
	for(i=0; i<even; i++){
		printf("even_array[%d] = %d\n",i,even_array[i]);
	}
	
	printf("\n");
	
	for(i=0; i<odd; i++){
		printf("odd_array[%d] = %d\n",i,odd_array[i]);
	}
	
	
	
//
//	1. �Է¹��� ���� ¦������ �Ǻ��Ѵ�.
//		1-1. ¦���� even_array��
//		1-2. Ȧ���� odd_array��
//	
//		int i = 0;
//		int even_current = 0;
//		int odd_current = 0;
//		
//		while (i < 10){
//			printf("Input number >>");
//			scanf("%d", &num); 
//			
//			if(num % 2 == 0){
//				//even_array�� ����
//				even_array[even_current] = num; 
//			}else{
//				//odd_array�� ����
//				odd_array[odd_current] = num; 
//			}
//			
//			i++;
//		}  
//		
//		

	
	
	

	return 0;
}
  

#include <stdio.h>

int main(){
	int array[] = {1,1,1,1,1,1,0,1,1,1};		//�迭�� �ʱ�ȭ, ���̽� �ȿ� ���� 
	//int a[] �̰� �Ұ�����, ���Ŷ �ȿ� �迭�� ũ�Ⱑ �������� ���� 
	int num;
	int count = 0; 
	
	while(1){
		printf("���ǾƸ� ã������ >> ");
		scanf("%d", &num);
		count++;
		if(array[num-1] == 0){				// 1���� ���� 
			printf("ã�Ҵ�!!!\n");
			printf("�õ�Ƚ�� : %d \n",count);
			break;
		} 
	}
	
	

	return 0;
} 

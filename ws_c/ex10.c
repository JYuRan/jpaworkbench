#include <stdio.h>

int main(){
	//num = 1234;
	//A[0] = 1;
	//A[1] = 2;
	//A[2] = 3;
	//A[3] = 4;
	//num = 5974~~~~
	int i;
	int num;
	 
	printf("�迭�� ���� 4�ڸ� ���ڸ� �Է��ϼ���.");
	scanf("%d", &num);
	
	int one = num / 1000;								// õ���ڸ� 
	int two = num / 100 - (one * 10);					// �����ڸ� 
	int three = num / 10 - (one * 100) - (two * 10);	// �����ڸ�
	int four = num % 10;								// �����ڸ� 
	
	int A[] = {one, two, three, four};
	
	printf("�Է°� = %d\n\n", num);

	for(i = 0; i < 4; i++){
		printf("A[%d] = %d\n",i , A[i]);
	}

	
	return 0;
}

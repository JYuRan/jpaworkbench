#include <stdio.h>

int main() {

	//	int sum = 0;
	//	sum = sum + 1;
	//	sum += 1;
	//	���� �� ���� ������ �ڵ�, ������ ���� ������� �ϱ�
	//
	//	printf("%d", sum);

	//�迭 : ���������� ���ӵ� ������ ������ Ÿ���� �ڷᰡ ����Ǿ� �ִ� ��

	//[]:���Ŷ / {}:���̽�(���)
	/*
	int n;
	n = 10;

	int nums[5];
	nums[0] = 1;
	nums[1] = 2;
	nums[2] = 3;
	nums[3] = 4;
	nums[4] = 5;

	printf("%d\n", nums[0]);
	*/
	
	// while
	printf("------while------\n");		
	int i = 0;
	while(i < 5){
		printf("%d. �ȳ��ϼ���..\n",(i+1));
		i = i + 1;
	}	
	
	
	
	
	
	//	for, for�� �տ��� ����Ÿ�� ���� �Ұ� 
	// �ݺ��� Ƚ���� �� �� ���� ���� for��, �� �� while 
	printf("------for------\n");
	int m;	
	for(m=0; m<5; m=m+1){
		printf("%d. �ȳ��ϼ���..\n",(m+1));
	}
	
	
	
	
	//	while���� ������ ���� ��� �������
	//	do while���� ������ ��� �ϴ� �� �� �����Ű�� �� 
	printf("------do while------\n");
	int z = 0;
	do{
		printf("%d. �ȳ��ϼ���..\n",(z+1));
		z = z + 1;
	}while(z < 5);



	return 0;
}

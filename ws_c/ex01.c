#include <stdio.h>

int main(){
//	int n = 10;
//	float f = 10.1;
//	char c = 'a';
//	
//	printf("Hello world");
//	printf("%d,\n%d",n,n+1);
//	
	
	
//	<����>
//	int a = 5;
//	int b = 6;
//	int sum = a + b; 
//
//	printf("%d\n""%d\n""%d",a,b,sum);


//	<¦�� Ȧ��>
	int n;
	
	while(1){	
		printf("���ڸ� �Է��ϼ���>>");
		scanf("%d", &n);
		// &n�� & : ���ۼ�Ʈ, �ּ������� 
		// printf �� ������ ������ ���� ������ scanf�� �� ������ ���ۼ�Ʈ ��� �� 
	
		if(n % 2 == 0){
			printf("¦��\n");
		}else{
			printf("Ȧ��\n");
		} 
		
	}
//	{} : �߰�ȣ, ���, ���̽� 
// 	printf �� f�� format 
	return 0;

}

// �����Ϸ��� ��޾� ���޾��� �ٲپ� �ִ°� 

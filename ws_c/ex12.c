#include <stdio.h>

int main(){
	
	int n = 3;
	do{
		printf("----���� ���α׷�----\n");
		printf("1. �Է��ϱ�\n");
		printf("2. ����ϱ�\n");
		printf("3. ��ȸ�ϱ�\n");
		printf("---------------------\n");
		printf("0. ����\n");
		printf("---------------------\n");
	
		printf("�޴��� �����ϼ��� >> ");
	
		scanf("%d",&n);
		switch(n){
		
			case 1: printf("-> �Է��ϱ⸦ �����Ͽ����ϴ�.\n\n\n"); break;
			case 2: printf("-> ����ϱ� �����Ͽ����ϴ�.\n\n\n"); break;
			case 3: printf("-> ��ȸ�ϱ� �����Ͽ����ϴ�.\n\n\n"); break;
			default: printf("");	
		
		}
	}while(n != 0);	
	printf("����˴ϴ�.");
	
	
	
	
	return 0;
}

#include <stdio.h>

int main(){
	
	int i = 1;
	
	int n = i++;
	// n = 1, i = 2
	
	int m = ++i;
	// m = 3, i = 3
	
	printf("n = %d\n", n);
	
	printf("m = %d\n", m);
	printf("i = %d\n", i);
	
	
	// ���ǽ�
	// �º� vs �캯 
	// �º� != �캯
	// �˺� <= �캯 
	
	printf("%d\n", (1 != 1) || (2 == 2)); 
	printf("%d\n", (1 != 1) && (2 == 2)); 
	
	
	
	 
	return 0;
}

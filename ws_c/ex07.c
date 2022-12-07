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
	
	
	// 조건식
	// 좌변 vs 우변 
	// 좌변 != 우변
	// 죄변 <= 우변 
	
	printf("%d\n", (1 != 1) || (2 == 2)); 
	printf("%d\n", (1 != 1) && (2 == 2)); 
	
	
	
	 
	return 0;
}

#include <stdio.h>
void swap(int *n1, int *n2);
int main(){
	
	int x = 10;
	int *p;
	p = &x;
	
	printf("%d \n", *p);
	
	
	return 0;
}

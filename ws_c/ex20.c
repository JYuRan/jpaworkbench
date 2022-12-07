#include <stdio.h>

void james(){
	printf("1-1 james출력	");
	kame();
}
void kame(){
	printf("1-2 kame출력	");
	ben();	
}
void ben(){
	printf("1-3 ben출력\n\n");	
}



void jane(){
	printf("2-1 jane출력	");	
	karl();
}
void karl(){
	printf("2-2 karl출력	");	
	sun();
}
void sun(){
	printf("2-3 sun출력");	
}



int main(){
	james();
	jane();	
	
	
	
	
	return 0;
}

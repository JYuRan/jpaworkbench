#include <stdio.h>

int main(){
	char array[] = {1,1,1,1,1,1,0,1,1,1};
	
	int length = sizeof(int);		//4
	length = sizeof(array) / sizeof(char);			//�迭�� ũ�⸦ �˰���� ��, ������/�ڷ��������� 
	// printf("%d\n", length);	
	
	int i;
	for(i = 0; i < length; i++){
		
	} 
	//////////////////////////////
	
	int num;
	int sum = 0;
	
	while(1){
		scanf("%d", &num);
		if(num == 0) break;
		
		if(num % 2 == 0){
			continue;			//�Է¹��� ���� ¦���� continue(�������� �ǳʶ�) 
		}
		sum = sum + num;
	
			
	}
		
		
	printf("sum = %d\n", sum);
	return 0;
}

//1. ������? ���� �� �ִ� ���� �����ϴ� ���� 
//2. �ڷ����̶�? ���� ���� ���� ���� �� �ִ� ��������� ���� 
//3. �迭�̶�? ���������� ���� �ڷ����� ���� �ڷ���� ���� 
//4. ���(���� : if, switch~case/�ݺ� : for, (do)while )
//	if(���ǽ�)
//		{���೻��}
//
//	switch(���� ��) 
//		case 1: break ~~
//		default: ; 
//
//	do {���೻��}
//	while(����); 
//5. ����¹�(printf, scanf) 
//6. ���� 
//	#include <stdio.h> 
//	#include <stdlib.h>
//	#include <time.h>
//		int random_num = 0;
//		srand(time(NULL)); 
//		random_num = rand()%100 + 1; 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int hist[6] = {0,0,0,0,0,0};
	srand(time(NULL));
	int i;
	int rd_num;
	for(i=0; i<100; i++){
		rd_num = rand()%6 + 1;
		hist[rd_num - 1]++;
	}
	
	for(i=0; i<6; i++){
		printf("hist[%d](%d�� ����) : %d\n", i, i+1,hist[i]);
	}
	
	
	return 0;
} 

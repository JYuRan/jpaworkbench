#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char *A[5][5] = {'0',};
	
	int i;	
	int k;	
	int m;
	m = 0;
	
	srand(time(NULL));
	int rd_num;
	rd_num = rand()%5+1;
	
	printf("<-- + 지그재그로 추가하기 -->\n");
	for(i=0; i<25; i++){
		rd_num = rand()%4+1;
		i +=rd_num;
		*(*A+i) = '*';
	}
	
	for(i=0; i<5; i++){
		for(k=0; k<5; k++){
//			if(i % 2 == 1){
//				k++;
//				if(k == 4){
//					k--;
//				}
//			}
//			A[i][k] = A[i][k] + ++m;
//			k = k-1+2;
			
		}
		for(k=0; k<5; k++){
			if(A[i][k] == '0'){
				printf("	");
				continue;
			}
			
			printf("%2c	",A[i][k]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}

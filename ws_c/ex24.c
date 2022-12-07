#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tripleSeven(){
	printf("랜덤한 숫자 세 개를 맞춰 보세요.\n");
	printf("포인트는 맞춘 숫자의 * 10\n");
	printf("같은 숫자로 배팅하여 맞출 시 * 숫자\n");
	
	srand(time(NULL));
	int random_num1 = 0;
	int random_num2 = 0;
	int random_num3 = 0;
	int n1,n2,n3 = 0;
	int point = 0;

	random_num1 = ((rand()%100 * rand()%100) % 3) + 5;
	random_num2 = ((rand()%100 * rand()%100) % 3) + 5;
	random_num3 = ((rand()%100 * rand()%100) % 3) + 5;
	
	scanf("%d %d %d", &n1, &n2, &n3);	
	if(n1 == random_num1){
		point += 10 * n1;
	}
	if(n2 == random_num2){
		point += 10 * n2;
	}
	if(n3 == random_num3){
		point += 10 * n3;
	}
	if(random_num1 == random_num2 && random_num2 == random_num3) {
		point *= random_num1;
	}
	
	
	printf("룰렛 [ %d %d %d ]\n", random_num1,random_num2,random_num3);
	
	return point;
}

int main(){
	printf("");
	int point;
	point = tripleSeven();
	
	printf("point = %d\n", point);
	
	return 0;
}


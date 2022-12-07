#include <stdio.h>

int main(){

	/*
	문제정의
	점수를 입력받아 학점(A,B,C,D,F)을 구하는 프로그램이다.
	1. 먼저 점수를 입력받아야 겠다.
	(점수를 입력받기 위해서는 변수를 선언하는게 더 우선이겠다.)
	기왕 변수이름을 정할 때 의미있는 이름을 짓자.
	변수선언은 '자료형'을 먼저 명시하고 '변수이름'을 써주는거다.
	점수는 0~100 사이의 숫자(정수)이니까.... 자료형은 int로 하자 
	
	int score;

	입력받을 때 사용했던 함수가 있었는데... 프린터기는 출력이고...
	스캐너는 입력이니까...맞다...scan...그리고... 포맷이라고..f.를 붙였지.
	scanf 함수였구나.
	printf("점수를 입력하세요 >> ");
	scanf("d", &score); 
	
	입력받은 점수가 어떤 학점에 해당하는지 판단을 내려야지.
	만약 입력받은 점수가 90점 이상이라면....
	만약 -->if, 점수가 90점 이상 --> (입력받은)점수는 현재 score변수에
	저장되어 있지. -->score >= 90
	if(score >= 90){
		printf("A학점");
	}else{
		if(score >= 80){
			printf("B학점"); 
		}else{
			if(score >= 70){
				printf("C학점"); 
			}else{
				if(score >= 60){
				printf("D학점"); 
				}else{
					printf("F학점");
				}
			}
		}	
	} 
	
	
	문제 받고 바로 퓰기 보단 어떻게 풀어야 할 지 재정의 먼저 하기,
	 
	*/ 
	
	while(1){
	
		int score = 0; 
	
		printf("성적을 입력하세요 : ");
		scanf("%d", &score);	
	
		if(score < 60){
			printf("F\n");
		}else if(score < 70){
			printf("D\n");
		}else if(score < 80){
			printf("C\n");
		}else if(score < 90){
			printf("B\n");
		}else if(score <=100){
			printf("A\n");
		}else{
			printf("0 - 100 사이의 ");
		}
	
	}


	return 0;
}



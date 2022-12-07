#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 브라켓[] 
int numberSelect(){
	
	srand(time(NULL));
	int random_num = 0;
	int i = 0;
	int num = 0;
	int count = 0;
	random_num = rand()%100 + 1;
				
	while(1){
		count++;
		printf("숫자를 맞추어 보세요.(1 ~ 100) \n >> "); 
		scanf("%d",&num);
		if(num == random_num){
			printf("\n정답입니다~");
			break;
			
		}else if(num>random_num){
			printf("%d보다 작습니다.\n\n",num);
		}else if(num<random_num){
			printf("%d보다 큽니다.\n\n",num);
		}
			
	}
	printf("\n시도횟수 : %d\n",count);  
	return 0;							
}
int rockPaperScissors(){
srand(time(NULL));
	int random_num = 0;
	int i = 0;
	int num = 0;
	int count = 0;
	int cpCount = 0;
	for(i=0; i<5; i++){
				
		random_num = rand()%3;
		printf("----낼 것을 선택하세요.-----\n1 : 가위  2 : 바위  3 : 보\n\n");
					
		scanf("%d",&num);
		num = num - 1; 
		//0:가위 1: 바위 2: 보 	
		//컴퓨터가 낸 것 출력  
		if(random_num == 0){
			printf("	컴퓨터 (가위)\n");
		}else if(random_num == 1){
			printf("	컴퓨터 (바위)\n");
		}else if(random_num == 2){
			printf("	컴퓨터 (보)\n");
		}  
		//유저가 낸 것 출력  
		if(num == 0){
			printf("\n     vs 사용자 (가위)\n\n");
		}else if(num == 1){
			printf("\n     vs 사용자 (바위)\n\n");
		}else if(num == 2){
			printf("\n     vs 사용자 (보)\n\n");
		}  
					
		if(random_num == num){
			//printf("나 : %c 컴퓨터 : %d\n",choice, random_num);
			printf("    <<-- 비겼습니다. -->>\n");
			i--;
		}else if((random_num == 0 && num == 2)||
				(random_num == 1 && num == 0)||
				(random_num == 2 && num == 1)){ 
			printf("    <<-- 졌습니다. -->>\n");
			cpCount ++;
		}else if(num<3){
			printf("    <<-- 이겼습니다. -->>\n");
			count = count + 1;
		}else{
			printf("****************************\n");
			printf("    1 - 3 사이의 숫자를\n       입력해주세요.\n");
			printf("****************************\n");
			i--; 
		} 
		printf("----------------------------\n");
		printf("컴퓨터 점수 %d : 내 점수 %d\n", cpCount, count);
		printf("----------------------------\n\n");
		if(count>2){
			printf("****************************\n");
			printf("\n 3판 승리하여 가위바위보\n 게임을 종료합니다.\n\n");
			printf("****************************\n\n");
						
			break;
			}
		if(cpCount>2){
			printf("\n컴퓨터가 3판 승리하여 가위바위보 게임을 종료합니다.\n\n");
			break;
			}
	}	
	return 0;
}
int dice(){
	srand(time(NULL));
	int random_num = 0;
	int i = 0;
	int num = 0;
	int count = 0;
	int percent = 0;
	int dice[6] = {0,0,0,0,0,0};
	for(i=0; i<100; i++){
		random_num = rand()%6 + 1;
		switch(random_num){
			case 1:dice[0] += 1; break;
			case 2:dice[1] += 1; break;
			case 3:dice[2] += 1; break;
			case 4:dice[3] += 1; break;
			case 5:dice[4] += 1; break;
			case 6:dice[5] += 1; break;
		}
	}
	printf("가장 많이 나온 눈금을 예상해보세요.");
	for(i=0; i<6; i++){
		printf("눈금 %d = %d회 \n",i+1, dice[i]);
	}
				
	return 0;
}
int tripleSeven(int momey){
	printf("랜덤한 숫자 세 개를 맞춰 보세요.\n");
	printf("포인트는 맞춘 숫자의 * 10\n");
	printf("같은 숫자로 배팅하여 맞출 시 * 숫자\n");
	momey -= 50;
	srand(time(NULL));
	int random_num1 = 0;
	int random_num2 = 0;
	int random_num3 = 0;
	int n1,n2,n3 = 0;
	

	random_num1 = ((rand()%100 * rand()%100) % 3) + 5;
	random_num2 = ((rand()%100 * rand()%100) % 3) + 5;
	random_num3 = ((rand()%100 * rand()%100) % 3) + 5;
	
	scanf("%d %d %d", &n1, &n2, &n3);	
	if(n1 == random_num1){
		momey += 10 * n1;
	}
	if(n2 == random_num2){
		momey += 10 * n2;
	}
	if(n3 == random_num3){
		momey += 10 * n3;
	}
	if((random_num1 == random_num2 && random_num2 == random_num3) && (random_num3 == n1 && n1 == n2 && n2 == n3))  {
		if(random_num1 == 7){
			momey *= 7;
		}else{
			momey += 100 * n1;
		}
		
	}
	
	
	printf("룰렛 [ %d %d %d ]\n", random_num1,random_num2,random_num3);
	
	return momey;
}
int outRandNum(int momey){
	
	srand(time(NULL));
	int randNum1,randNum2,randNum3;
	int i;
	int ans;
	
	do{
		int gameCount = gameCount +1;
		randNum1 = ((rand()%78 * rand()%100 * rand()%100) % 3) + 1;
		randNum2 = ((rand()%178 * rand()%100 * rand()%100) % 3) + 1;
		randNum3 = ((rand()%164 * rand()%100 * rand()%100) % 3) + 1;
		int A[3] = {randNum1,randNum2,randNum3};
		
		printf(" [ 결과 : ");
		for(i = 0; i < 3; i++){
			printf("%d ",A[i]);	
		}
		printf(" ]");
		if(randNum1 == randNum2 && randNum2 == randNum3){
			momey = momey + 100;
		}else{
			momey = momey - 10;
		}
		printf("\n\n<< 잔  액 : %d >>\n\n", momey);
		printf("재도전하시겠습니까? \n(1:yes, 0:no)\n\n");
		scanf("%d",&ans);
	}while(ans != 0);
	
	return momey;
}
int pointTrans(int money,int *coinNum){
	int coinWant;
	
	scanf("%d", &coinWant);
	
	if(money - (100 * coinWant)>=0){
		
		money = money - 100 * coinWant; 
		*coinNum = *coinNum + coinWant;
		printf("잔액 : %d, coin : %d\n\n\n",money, *coinNum); 
	}else{
		printf("잔액이 부족합니다.\n");
	}
	return money;
}


int main() {
	//int point;
	int *coinNum = 0;
	int momey = 1000;
	int n;
	int gameCount = 0;
	do{
		printf("\n----연습 프로그램----   ver3.0\n");
		printf("1. 숫자맞추기 게임\n");
		printf("2. 가위바위보 게임\n");
		printf("3. 주사위 굴리기\n"); 
		printf("4. 숫자맞추기 게임2\n"); 
		printf("5. 룰렛 돌리기\n"); 
		printf("---------------------\n");
		printf("1000. 잔액 확인\n");
		printf("1001. 코인 추가(x)\n");
		printf("0. 종료\n");
		printf("---------------------\n");
	
		printf("게임을 선택하세요 >> ");
	
		scanf("%d",&n);
		switch(n){
		
			case 1: 
				printf("-> 숫자맞추기 게임을 선택하였습니다.\n\n\n");
				numberSelect();
				gameCount++;
				printf("\n<< 게임 횟수 : %d >>\n\n\n",gameCount);
				break;
			case 2:  
				printf("-> 가위바위보를 선택하였습니다.\n"); 
				printf("   게임은 5판 3승제로 진행됩니다.\n\n"); 
				rockPaperScissors();
				gameCount++;
				printf("\n<< 게임 횟수 : %d >>\n\n\n",gameCount);
				break;
			case 3: 
				printf("-> 주사위 굴리기를 선택하였습니다.\n\n"); 
				dice();
				gameCount++;
				printf("\n<< 게임 횟수 : %d >>\n\n\n",gameCount);
				break;
			case 4: 
				printf("->  숫자맞추기 게임2를 선택하였습니다.\n\n"); 
				momey = tripleSeven(momey);
				gameCount++;
				printf("\n<< 게임 횟수 : %d >>\n\n\n",gameCount);
				printf("잔액 = %d\n", momey);
				break;
			case 5: 
				printf("->  룰렛 돌리기를 선택하였습니다.\n\n"); 
				momey = outRandNum(momey);
				gameCount++;
				printf("\n<< 게임 횟수 : %d >>\n\n\n",gameCount);
				break;	
				
			case 1000:
				printf("\n\n잔액 = %d\n\n", momey);
				break; 
			case 1001:
				printf("포인트 교환\n");
				printf("\n\n잔액 = %d\n\n", momey);
				printf("100 point >>> 1 coin\n");
				printf("교환 할 코인 수를 적어주세요.\n");
				momey = pointTrans(momey, &coinNum); 
				break; 
			default: printf(""); 	
		}
	}while(n != 0);	
	printf("\n<< 모은 코인 : %d >>\n", coinNum);
	printf("종료됩니다.");
	
	
	// 숫자 맞추기 1~100 
	//	1. 랜덤수를 발생시키자 
	//  2. 수를 입력하자.
	//	3. 두 수를 비교하자.
	//		3-1. 입력한 수가 랜덤수보다 작으면 '작다'고 알려주자  
	//		3-2. 입력한 수가 랜덤수보다 크면 '크다'고 알려주자  
	//		3-3. 입력한 수와 랜덤수가 같으면 '같다'고 알려주자. 그리고 끝내자.  
	//가위바위보
	//주사위 열번 굴렸다? x 100번 1몇번? 2몇번? 3~~~~~6몇번? 
	//배열만들어서 저장 횟수들 /배열출력 

	return 0;
}

//random_num = rand()%6 + 1; 

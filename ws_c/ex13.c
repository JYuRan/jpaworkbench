#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// �����[] 
int numberSelect(){
	
	srand(time(NULL));
	int random_num = 0;
	int i = 0;
	int num = 0;
	int count = 0;
	random_num = rand()%100 + 1;
				
	while(1){
		count++;
		printf("���ڸ� ���߾� ������.(1 ~ 100) \n >> "); 
		scanf("%d",&num);
		if(num == random_num){
			printf("\n�����Դϴ�~");
			break;
			
		}else if(num>random_num){
			printf("%d���� �۽��ϴ�.\n\n",num);
		}else if(num<random_num){
			printf("%d���� Ů�ϴ�.\n\n",num);
		}
			
	}
	printf("\n�õ�Ƚ�� : %d\n",count);  
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
		printf("----�� ���� �����ϼ���.-----\n1 : ����  2 : ����  3 : ��\n\n");
					
		scanf("%d",&num);
		num = num - 1; 
		//0:���� 1: ���� 2: �� 	
		//��ǻ�Ͱ� �� �� ���  
		if(random_num == 0){
			printf("	��ǻ�� (����)\n");
		}else if(random_num == 1){
			printf("	��ǻ�� (����)\n");
		}else if(random_num == 2){
			printf("	��ǻ�� (��)\n");
		}  
		//������ �� �� ���  
		if(num == 0){
			printf("\n     vs ����� (����)\n\n");
		}else if(num == 1){
			printf("\n     vs ����� (����)\n\n");
		}else if(num == 2){
			printf("\n     vs ����� (��)\n\n");
		}  
					
		if(random_num == num){
			//printf("�� : %c ��ǻ�� : %d\n",choice, random_num);
			printf("    <<-- �����ϴ�. -->>\n");
			i--;
		}else if((random_num == 0 && num == 2)||
				(random_num == 1 && num == 0)||
				(random_num == 2 && num == 1)){ 
			printf("    <<-- �����ϴ�. -->>\n");
			cpCount ++;
		}else if(num<3){
			printf("    <<-- �̰���ϴ�. -->>\n");
			count = count + 1;
		}else{
			printf("****************************\n");
			printf("    1 - 3 ������ ���ڸ�\n       �Է����ּ���.\n");
			printf("****************************\n");
			i--; 
		} 
		printf("----------------------------\n");
		printf("��ǻ�� ���� %d : �� ���� %d\n", cpCount, count);
		printf("----------------------------\n\n");
		if(count>2){
			printf("****************************\n");
			printf("\n 3�� �¸��Ͽ� ����������\n ������ �����մϴ�.\n\n");
			printf("****************************\n\n");
						
			break;
			}
		if(cpCount>2){
			printf("\n��ǻ�Ͱ� 3�� �¸��Ͽ� ���������� ������ �����մϴ�.\n\n");
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
	printf("���� ���� ���� ������ �����غ�����.");
	for(i=0; i<6; i++){
		printf("���� %d = %dȸ \n",i+1, dice[i]);
	}
				
	return 0;
}
int tripleSeven(int momey){
	printf("������ ���� �� ���� ���� ������.\n");
	printf("����Ʈ�� ���� ������ * 10\n");
	printf("���� ���ڷ� �����Ͽ� ���� �� * ����\n");
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
	
	
	printf("�귿 [ %d %d %d ]\n", random_num1,random_num2,random_num3);
	
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
		
		printf(" [ ��� : ");
		for(i = 0; i < 3; i++){
			printf("%d ",A[i]);	
		}
		printf(" ]");
		if(randNum1 == randNum2 && randNum2 == randNum3){
			momey = momey + 100;
		}else{
			momey = momey - 10;
		}
		printf("\n\n<< ��  �� : %d >>\n\n", momey);
		printf("�絵���Ͻðڽ��ϱ�? \n(1:yes, 0:no)\n\n");
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
		printf("�ܾ� : %d, coin : %d\n\n\n",money, *coinNum); 
	}else{
		printf("�ܾ��� �����մϴ�.\n");
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
		printf("\n----���� ���α׷�----   ver3.0\n");
		printf("1. ���ڸ��߱� ����\n");
		printf("2. ���������� ����\n");
		printf("3. �ֻ��� ������\n"); 
		printf("4. ���ڸ��߱� ����2\n"); 
		printf("5. �귿 ������\n"); 
		printf("---------------------\n");
		printf("1000. �ܾ� Ȯ��\n");
		printf("1001. ���� �߰�(x)\n");
		printf("0. ����\n");
		printf("---------------------\n");
	
		printf("������ �����ϼ��� >> ");
	
		scanf("%d",&n);
		switch(n){
		
			case 1: 
				printf("-> ���ڸ��߱� ������ �����Ͽ����ϴ�.\n\n\n");
				numberSelect();
				gameCount++;
				printf("\n<< ���� Ƚ�� : %d >>\n\n\n",gameCount);
				break;
			case 2:  
				printf("-> ������������ �����Ͽ����ϴ�.\n"); 
				printf("   ������ 5�� 3������ ����˴ϴ�.\n\n"); 
				rockPaperScissors();
				gameCount++;
				printf("\n<< ���� Ƚ�� : %d >>\n\n\n",gameCount);
				break;
			case 3: 
				printf("-> �ֻ��� �����⸦ �����Ͽ����ϴ�.\n\n"); 
				dice();
				gameCount++;
				printf("\n<< ���� Ƚ�� : %d >>\n\n\n",gameCount);
				break;
			case 4: 
				printf("->  ���ڸ��߱� ����2�� �����Ͽ����ϴ�.\n\n"); 
				momey = tripleSeven(momey);
				gameCount++;
				printf("\n<< ���� Ƚ�� : %d >>\n\n\n",gameCount);
				printf("�ܾ� = %d\n", momey);
				break;
			case 5: 
				printf("->  �귿 �����⸦ �����Ͽ����ϴ�.\n\n"); 
				momey = outRandNum(momey);
				gameCount++;
				printf("\n<< ���� Ƚ�� : %d >>\n\n\n",gameCount);
				break;	
				
			case 1000:
				printf("\n\n�ܾ� = %d\n\n", momey);
				break; 
			case 1001:
				printf("����Ʈ ��ȯ\n");
				printf("\n\n�ܾ� = %d\n\n", momey);
				printf("100 point >>> 1 coin\n");
				printf("��ȯ �� ���� ���� �����ּ���.\n");
				momey = pointTrans(momey, &coinNum); 
				break; 
			default: printf(""); 	
		}
	}while(n != 0);	
	printf("\n<< ���� ���� : %d >>\n", coinNum);
	printf("����˴ϴ�.");
	
	
	// ���� ���߱� 1~100 
	//	1. �������� �߻���Ű�� 
	//  2. ���� �Է�����.
	//	3. �� ���� ������.
	//		3-1. �Է��� ���� ���������� ������ '�۴�'�� �˷�����  
	//		3-2. �Է��� ���� ���������� ũ�� 'ũ��'�� �˷�����  
	//		3-3. �Է��� ���� �������� ������ '����'�� �˷�����. �׸��� ������.  
	//����������
	//�ֻ��� ���� ���ȴ�? x 100�� 1���? 2���? 3~~~~~6���? 
	//�迭���� ���� Ƚ���� /�迭��� 

	return 0;
}

//random_num = rand()%6 + 1; 

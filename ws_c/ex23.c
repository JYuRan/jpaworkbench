#include <stdio.h>
	//f�� ���� ���� ex(1,10) = > 1~ 10������ �� ���ϱ�  
	// �ռ��ڰ� �� ũ�� �ݴ�� 12:30/12:40... �� ���� �������� 
	// ���� ���� ���� ������(7 7 7),,, ���� ���� ���߱�, ���� 1`10 ���� �迭�� �ְ�,,,
	// ���� ����ڰ� �Է��ؼ� ���߱� 
int f(int n1, int n2){
	int sum = 0;
	int i;

	if(n1<n2){
		for(i=n1; i<=n2; i++){
		sum = sum + i;
		}
	}else{
		for(i=n2; i<=n1; i++){
		sum = sum + i;
		}
	}
	
	return sum;
}

int main(){
	
	int num1, num2;
	int result;
	
	while(1){
		printf("�������� ���� �� ���� �Է��ϼ���.\n>> ");
		scanf("%d %d", &num1, &num2);
		
		result = f(num1, num2);
		printf("result = %d\n\n",result);
	} 
	
	
	
	return 0;
} 

#include <stdio.h>
	//f에 넣은 숫자 ex(1,10) = > 1~ 10까지의 합 구하기  
	// 앞숫자가 더 크면 반대로 12:30/12:40... 두 수는 같지않음 
	// 랜덤 숫자 세개 나오면(7 7 7),,, 숫자 세개 맞추기, 숫자 1`10 까지 배열에 넣고,,,
	// 값을 사용자가 입력해서 맞추기 
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
		printf("범위합을 구할 두 수를 입력하세요.\n>> ");
		scanf("%d %d", &num1, &num2);
		
		result = f(num1, num2);
		printf("result = %d\n\n",result);
	} 
	
	
	
	return 0;
} 

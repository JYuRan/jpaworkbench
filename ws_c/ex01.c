#include <stdio.h>

int main(){
//	int n = 10;
//	float f = 10.1;
//	char c = 'a';
//	
//	printf("Hello world");
//	printf("%d,\n%d",n,n+1);
//	
	
	
//	<문제>
//	int a = 5;
//	int b = 6;
//	int sum = a + b; 
//
//	printf("%d\n""%d\n""%d",a,b,sum);


//	<짝수 홀수>
	int n;
	
	while(1){	
		printf("숫자를 입력하세요>>");
		scanf("%d", &n);
		// &n의 & : 앤퍼센트, 주소지정자 
		// printf 쓸 때에는 변수만 쓰면 되지만 scanf를 쓸 때에는 앤퍼센트 써야 함 
	
		if(n % 2 == 0){
			printf("짝수\n");
		}else{
			printf("홀수\n");
		} 
		
	}
//	{} : 중괄호, 블록, 블레이스 
// 	printf 의 f는 format 
	return 0;

}

// 컴파일러는 고급언어를 저급언어로 바꾸어 주는것 

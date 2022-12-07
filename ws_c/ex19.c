#include <stdio.h>

//1. 함수 만들어보기1
//	함수이름 : f01
//	입력자료 없음
//	반환자료 없음 
void f01(){
	printf("Hello\n");
}

//2. 함수 만들어보기2 
//	함수이름 : f02
//	입력자료 정수형 n1, n2
//	반환자료 n1+n2의 결과값 result 
int f02(int n1, int n2){
	
	int result;
	result = n1 + n2;
	
	
	return result;	
}

//3. 함수 만들어보기3 
//	함수이름 : printInsa
//	입력자료 없음
//	기능 : printf문 출력 
//	반환자료 없음  
void printInsa(){
	printf("안녕하세요.\n");
}

//4. 함수 만들어보기4
//	함수이름 : linePrint
//	입력자료 정수형 num 
//	기능 : "="를 입력받은 수 만큼 출력 
//	반환자료 없음  
int linePrint(int n, char ch){
//	while(num != 0){
//		printf("=");
//		num--;
//	}
	int i;		
	for(i=0; i<n; i++){
		printf("%c", ch);		
	}
	
	return n;
}


int main(){
	
//	f01(); 
//	int result_main = f02(3,5);
//	
//	printf("%d\n",result_main);
//	printInsa();
	int cnt = linePrint(3,'*');
	printf("\ncnt = %d\n",cnt);
//	char ch = 'a';
//	printf("\ncnt = %c\n", ch);

	
	return 0;
}

#include <stdio.h> 

int f(int a,int b){
   
   int i;
   int sum = 0;
   
   if(a>b){
      for(i=b; i<=a; i++){
         sum = sum + i;         
    	}
   }else{
      for(i=a; i<=b; i++){
         sum = sum + i;
    	}
   }   
   return sum;
}
int main(){
   int x;
   x = f(5,2);
   
   printf("%d",x);
   return 0;
}

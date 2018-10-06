#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 5

int main(){
   int a, b, ans, right,i;
   srand(time(NULL));
   right=0;
   
   for(i=0;i<N;i++){
   	   a=rand()%21;
   	   b=rand()%21;
   	   printf("How much is: %d * %d ? ", a,b);
   	   scanf("%d", &ans);
   	   if(ans==a*b){
   	   	     right++;
		  } 
   }
   
   printf("\nCorrect answers: %d", right);
   printf("\nIncorrect answers: %d", N-right);	
}

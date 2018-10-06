#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 5

int main(){
   int a, b,c,d,e;
   srand(time(NULL));
   a=rand()%35+1;
   printf("%d, ", a);
   
   b=rand()%35+1;
   while(b==a){
   	  b=rand()%35+1;
   }
   printf("%d, ", b);
   
   c=rand()%35+1;
   while(c==a || c==b){
   	  c=rand()%35+1;
   }
   printf("%d, ", c);
   
   
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 40

int main(){
   int i,z,p;
   srand(time(NULL));
   for(i=1;i<=N;i++){
   	 p=rand()%3;
		if(p==0 ){ //velke pismeno
			z=rand()%26+65;   // z=rand()%26+'A';
		} 
		if(p==1 ){ //male pismeno
			z=rand()%26+97;
		}
		if(p==2 ){ //cislica
			z=rand()%10+'0';
		} 
		printf("%c",z);
   }
}

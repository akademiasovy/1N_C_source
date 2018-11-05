#include <stdio.h>
#include <math.h>

int main(){
   int a,b,temp;
   printf("\nFirst number: ");
   scanf("%d", &a);
   printf("\nSecond number: ");
   scanf("%d", &b);
   if(a<b){
   	   temp=a;
   	   a=b;
	   b=temp;
   }
   while( a%b!=0 )
   {
	   	a=a-b;
	   	if(a<b){
	   	   temp=a;
	   	   a=b;
		   b=temp;
	    }
   }
   printf("The largest common (delitel) is %d",b);
}

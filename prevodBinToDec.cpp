#include <stdio.h>
#include <math.h>

int main(){
   int b,d,i;
   printf("\nEnter number <00000000-11111111>: ");
   scanf("%d", &b);
   d=0;
   i=0;
   while(b!=0){
   	d=d+(b%10)*pow(2,i);
   	i++;
   	b=b/10;
   }
   printf("Decimal : %d", d);
}

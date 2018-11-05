#include <stdio.h>

int main(){
   int a[16];
   int i,j,n,m;
   printf("\nEnter number <0-65535>: ");
   scanf("%d", &n);
   m=n;
   if(n<0 || n>65535) {
   	  printf("Incorrect input value !");
   }
   else
   {  // prevod
     	i=0;
     	printf("Decimal code: %d\n",n);
     	
     	//binary
     	printf("Binary code: ");
     	while(n!=0){
     		a[i]=n%2;
     		n=n/2;
     		i++;
		}		 
		for(j=i-1; j>=0;j--)
		printf("%d ", a[j]);
		
		//octan:
		i=0;
		n=m;
		printf("\nOctan code: ");
     	while(n!=0){
     		a[i]=n%8;
     		n=n/8;
     		i++;
		}		 
		for(j=i-1; j>=0;j--)
		printf("%d ", a[j]);
		
		//hexadecimal:
		i=0;
		n=m;
		printf("\nOctan code: ");
     	while(n!=0){
     		a[i]=n%16;
     		n=n/16;
     		i++;
		}		 
		for(j=i-1; j>=0;j--)
		printf("%x ", a[j]);		 
   }
}

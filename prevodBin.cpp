#include <stdio.h>

int main(){
   int a[8];
   int i,j,n;
   printf("\nEnter number <0-255>: ");
   scanf("%d", &n);
   if(n<0 || n>255) {
   	  printf("Incorrect input value !");
   }
   else
   {  // prevod
     	i=0;
     	while(n!=0){
     		a[i]=n%2;
     		n=n/2;
     		i++;
		}		 
		for(j=i-1; j>=0;j--)
		printf("%d ", a[j]);	 
   }
}

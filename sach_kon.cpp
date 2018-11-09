#include <stdio.h>
#include <ctype.h>


int main()
{
	int s;
	char r;
	scanf("%c", &r);
	scanf("%d", &s);
	printf("Results: ");
	r=toupper(r);
	
	if(r>'A' && s>2)
   	   printf("%c%d ", r-1,s-2);
	
	if(r<'H' && s>2)
	   printf("%c%d ", r+1,s-2);
	   
	if(r<'G' && s>1)
	   printf("%c%d ", r+2,s-1);
	   
	if(r<'G' && s<8)
	   printf("%c%d ", r+2,s+1); 
	   
	if(r<'H' && s<7)
	   printf("%c%d ", r+1,s+2);  
	   
	if(r<'H' && s>1)
	   printf("%c%d ", r-1,s+2);
	   
	if(r>'B' && s<8)
	   printf("%c%d ", r-2,s+1); 
	
	if(r>'B' && s>1)
	   printf("%c%d ", r-2,s-1); 
}



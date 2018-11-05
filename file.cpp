#include <stdio.h>
#include <ctype.h>

int main()
{
     FILE *f;
     f=fopen("data.txt","r");
     if(f==NULL){
     	printf("I cannot open the file !");
     	return 1;
	 }
	 char z;
	 
	 while( (z = fgetc(f)) != EOF ){
	 	 if(isupper(z)){
	 	 	z=tolower(z);
		  }
		  if(!isdigit(z)){
	           putchar(z);
	      }
     }
	 fclose(f);	 
}

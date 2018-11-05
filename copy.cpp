#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   FILE *f,*g;
     f=fopen("vstup.txt","r");
     g=fopen("vystup.txt","w");
	 if(f==NULL){
     	printf("I cannot open the file1 !");
     	return 1;
	 }
	 if(g==NULL){
     	printf("I cannot open the file2 !");
     	return 1;
	 }	
     char z;
     
     while( (z=fgetc(f))!=EOF){
     	if(z>='a' && z<='z')   // ctype.h   z=toupper(z);
     	   z=z-32;
     	   
     	fputc(z,g);
	 }
	
	 fclose(f);	 
	 fclose(g);
}

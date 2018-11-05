#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
   char fname[20];
   char lname[20];
   printf("Enter your first name: ");
   scanf("%s", &fname);
   printf("Enter your last name: ");
   scanf("%s", &lname);
   if(fname[0]>='a' && fname[0]<='z')
      fname[0]=fname[0]-32;
   /* include <ctype.h>
	  fname[0]=toupper(fname[0]);  */
	if(lname[0]>='a' && lname[0]<='z')
      lname[0]=lname[0]-32;	   
	int lenght=strlen(lname);
	int i;
	for(i=1;i<lenght;i++){
		lname[i]=tolower(lname[i]);
	}	  

    printf("%c. %s",fname[0], lname);	
	  
}

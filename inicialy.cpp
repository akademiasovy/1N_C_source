#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
   char fname[20];
   char lname[20];
   char city[20];
   char zip[7];
   if(fname[0]>='a' && fname[0]<='z')
      fname[0]=fname[0]-32;
   printf("Enter your first name: ");
   scanf("%s", &fname);
   printf("Enter your last name: ");
   scanf("%s", &lname);
   
   if(strcmp(fname,lname)==0){
   	     printf("\nFirst name and last name must be different!");
   	     return 1;
   }
   
   printf("Enter your city: ");
   scanf("%s", &city);
   printf("Enter your zip code: ");
   scanf("%s", &zip);
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

     lenght=strlen(city);
    for(i=0;i<lenght;i++){
		city[i]=toupper(city[i]);
	}
   
    zip[6]='\0';
    zip[5]=zip[4];
    zip[4]=zip[3];
    zip[3]=' ';
    printf("%c. %s %s %s",fname[0], lname, city, zip);	
	  
}

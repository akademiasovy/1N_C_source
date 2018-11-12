#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool checkPassword(char pass[])
{
    int len=strlen(pass);
	if(len<6)	
	   return false;
	bool lower=false;
	bool upper=false;
	bool digit=false;
	int i;
	for(i=0;i<len;i++){
		if(isdigit(pass[i]))
			digit=true;
		else if(isupper(pass[i]))
			upper=true;	
		else if(islower(pass[i]))
			lower=true;			
	} 
	/*if(digit && lower && upper)
	   return true;
	else 
	   return false;  */
	return digit && lower && upper;   
}

bool checkEmail(char email[])
{
	 int len=strlen(email);
	 if(len<5)	
	   return false;
	 int at=0;

	 int i;
	 for(i=0;i<len;i++){
	 	if(email[i]=='@')
	 	   at++;
	 	if(at>1)
		   return false;
		   
		if( !(isalnum(email[i]) || email[i]=='.' || email[i]=='-' || email[i]=='_' )) 
		     return false;     
	 }
	 return true;
}

int main()
{
    
}



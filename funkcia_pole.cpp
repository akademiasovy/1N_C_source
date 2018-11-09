#include <stdio.h>
#include <ctype.h>
#include <string.h>

int countOfVowels(char text[])
{
   int count=0;
   int length=strlen(text);
   int i;
   char c;
   for(i=0;i<length;i++){
   	  c=text[i];
   	  c=tolower(c);
   	  if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y' )
   	     count ++;
   }
   return count;	
}

int absolut(int n){
	return n>=0?n:-n;
}

int max(int arr[], int n)
{
	int m=arr[0];
	int i;
	for(i=1;i<n;i++){
		if(m<arr[i])
		   m=arr[i];
	}
	return m;
}

bool isPalindrom(char text[]){
	int i;
	int length=strlen(text);
	for(i=0;i<length/2;i++){
		if(tolower(text[i])!=tolower(text[length-i-1]))
		     return false;
	}
	return true;
}

int main()
{
    int pole[]={4,8,9,0,1,15,21,3,4,17,9};
    int result=max(pole,11);
    printf("Maximum is: %d", result);
    
    printf("\nCount of vowels: %d", countOfVowels("Abrakadabra"));
    
    if(isPalindrom("1234554321"))
        printf("\nWord is palindrom");
    else
	    printf("\nWord is not palindrom");    
}



#include <stdio.h>

void sayHello(int );
float average(int a, int b, int c);
float min(float a, float b, float c);
int digitSum(int x);
bool isIsoscelesTriangle(int a, int b, int c);
int reverseNumber(int h);

void greeting(){
    printf("Ahoj ");	
}

int add(int a, int b){
	int c;
	c=a+b;
	return c;
}

float calculateBMI(int m, float h){
	return m/(h*h);
}

int main(){
   	greeting();
	greeting();
	greeting();
	greeting();
	greeting(); 
	putchar('\n');
	sayHello(4); 
	putchar('\n');
	int result = add(56, 48);
	printf("Result is : %d",result);
	float bmi = calculateBMI(98,1.83);
	printf("\nYour BMI is %1.2f",bmi);
	
	printf("\nAverage is: %1.4f", average(45,89,76) );
	
	printf("\nMin is %1.2f", min(589,42,96) );
	
	printf("\nDigit sum is %d", digitSum(847564) );
	
	if( isIsoscelesTriangle(1,2,1) )
	   printf("\n Isosceles Triangle: yes");
	else
	   printf("\n Isosceles Triangle: no");   
	   
	printf("\nReverse number: %d", reverseNumber(789256) );   
}

void sayHello(int num){
	int i;
	for(i=0;i<num;i++){
		printf("Hello ");
	}
}

float average(int a, int b, int c){
	return (float)(a+b+c)/3;
}

float min(float a, float b, float c)
{
    if(a<=b && a<=c)
	   return a;
	else if(b<=c)
	        return b;
		 else
		    return c;  	
}

int digitSum(int x){
    int sum=0;
    int rest;
    while(x>0){
    	rest=x%10;
    	sum=sum+rest;
    	x=x/10;
	}
	return sum;
}

bool isIsoscelesTriangle(int a, int b, int c){
	if(!(a+b>c && a+c>b && b+c>a))
	    return false; // trojuholnik neexistuje
	else {
		if( (a==b && a!=c) || (a==c && a!=b) || (c==b && a!=c))
		     return true;  // je rovnoramenny
		else 
		     return false;  // nie je rovnoramenny    
	}    
	
}

int reverseNumber(int h)
{
	int res=0;
	while(h>0){
		res=res*10+h%10;
		h=h/10;
	}
	return res;
}



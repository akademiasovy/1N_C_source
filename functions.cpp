#include <stdio.h>

void sayHello(int );

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
}

void sayHello(int num){
	int i;
	for(i=0;i<num;i++){
		printf("Hello ");
	}
}

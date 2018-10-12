#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int month;
	printf("Type a number: ");
	scanf("%d", &month);
	
	switch(month)
	{
		case 1: printf("January.");break;
		case 2: printf("February.");break;
		case 3: printf("March.");break;
		case 4: printf("April.");break;
		case 5: printf("May.");break;
		case 6: printf("June.");break;
		case 7: printf("July.");break;
		case 8: printf("August.");break;
		case 9: printf("September.");break;
		case 10: printf("October.");break;
		case 11: printf("November.");break;
		case 12: printf("December.");break;
		default: printf("Wrong number.");
	}
	
	switch(month)
	{
		case 3:
		case 4:
		case 5: printf("Spring");break;
		case 6:
		case 7: 
		case 8: printf("Summer");break;
		case 9:
		case 10:
		case 11: printf("Autumn");break;
		case 12:
		case 1:
		case 2: printf("Winter");break;
		default: printf("Wrong number.");
	}
}

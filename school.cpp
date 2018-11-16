#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct student {
	char fname[20];
	char lname[20];
	int m1, m2, m3, m4, m5;
	float avg;
	int age;
}student;

int main()
{
     FILE *f;
     struct student class1N[20];
     int index=0;
     f=fopen("students.txt","r");
     while( fscanf(f,"%s", &class1N[index].fname)!=EOF){
     	fscanf(f,"%s", &class1N[index].lname);
     	fscanf(f,"%d", &class1N[index].age);
     	fscanf(f,"%d%d%d", &class1N[index].m1, &class1N[index].m2, &class1N[index].m3 );
	    fscanf(f,"%d%d", &class1N[index].m4, &class1N[index].m5);
	   
	    float avg=(class1N[index].m1+class1N[index].m2+class1N[index].m3+class1N[index].m4+class1N[index].m5)/5.0;
        class1N[index].avg=avg;
		 index++;
	 }
	 fclose(f);	
	 
	 // hladanie a vypisanie najmladsieho studenta
	 struct student benjaminek=class1N[0];
	 int i;
	 for(i=1; i<index; i++){
	 	if(benjaminek.age>class1N[i].age){
	 		benjaminek=class1N[i];
		 }
	 }
	 printf("\nThe youngest student: %s %s %d", benjaminek.fname, benjaminek.lname, benjaminek.age);
	  
	 // hladanie a vypisanie najlepsieho studenta 
	 struct student expert=class1N[0];
	 for(i=1; i<index; i++){
	 	if(expert.avg>class1N[i].avg){
	 		expert=class1N[i];
		 }
	 }
	 printf("\nExcelent student: %s %s %1.2f", expert.fname, expert.lname, expert.avg); 

    // prepadavajuci ziaci
    printf("\nLoosers: ");
    for(i=0; i<index; i++){
    	if(class1N[i].m1==5 || class1N[i].m2==5 || class1N[i].m3==5 || class1N[i].m4==5 || class1N[i].m5==5)
	        printf("%s %s    ",class1N[i].fname, class1N[i].lname);
	}
	
	int j;
	for(i=0;i<index-1;i++){
		for(j=0;j<index-1-i;j++){
			if(class1N[j].age>class1N[j+1].age){
			    struct student temp = class1N[j];
			    class1N[j]=class1N[j+1];
			    class1N[j+1]=temp;
			}
		}
	}
	printf("\nList of students sorted by age:");
	for(i=0;i<index;i++)
	   printf("\n\t%s %s %d",class1N[i].fname, class1N[i].lname, class1N[i].age);

    for(i=0;i<index-1;i++){
		for(j=0;j<index-1-i;j++){
			if(strcmp(class1N[j].lname,class1N[j+1].lname)>0){
			    struct student temp = class1N[j];
			    class1N[j]=class1N[j+1];
			    class1N[j+1]=temp;
			}
		}
	}
	printf("\n\nList of students sorted by last name:");
	for(i=0;i<index;i++)
	   printf("\n\t%s %s %d",class1N[i].lname, class1N[i].fname, class1N[i].age);
	   
	for(i=0;i<index-1;i++){
		for(j=0;j<index-1-i;j++){
			if(class1N[j].avg>class1N[j+1].avg){
			    struct student temp = class1N[j];
			    class1N[j]=class1N[j+1];
			    class1N[j+1]=temp;
			}
		}
	}
	printf("\n\nList of students sorted by average:");
	for(i=0;i<index;i++)
	   printf("\n\t%s %s %1.2f",class1N[i].fname, class1N[i].lname, class1N[i].avg);
   
}

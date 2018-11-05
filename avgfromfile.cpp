#include <stdio.h>
#define N 7

int main()
{
     FILE *f,*g;
     f=fopen("cisla.dat","r");
     g=fopen("statistik.dat","w");
     if(f==NULL){
     	printf("I cannot open the file1 !");
     	return 1;
	 }
	 if(g==NULL){
     	printf("I cannot open the file2 !");
     	return 1;
	 }
	 int arr[N];
	 int i, x, sum=0;
	 
	for(i=0;i<N;i++){
		fscanf(f,"%d", &x);
		arr[i]=x;
		sum=sum+x;
	}
	
	double avg=(double)sum/N;
	printf("Average is: %1.2f", avg);
	fprintf(g,"Average is: %1.2f", avg);
	
	int min=arr[0];
	for(i=1;i<N;i++){
		if(min>arr[i])
		    min=arr[i];
	}
	fprintf(g,"\nMinimum is: %d", min);
	 fclose(f);	 
	 fclose(g);	
}

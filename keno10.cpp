#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int keno[20];
    int i,j,x, match;
    srand(time(NULL));
    keno[0]=rand()%80+1;
    i=1;
    while(i<=19){
    	x=rand()%80+1;
    	match=0;
    	for(j=0;j<i;j++){
    		if(x == keno[j]){
    			match=1;
    			break;
			}
		}
		if(match==0){
			keno[i]=x;
			i++;
		}
	}
	
	for(j=0;j<20;j++){
		printf("%d ", keno[j]);
	}
    
    
}

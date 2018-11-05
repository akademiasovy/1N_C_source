#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	// UCEL: 20 nahodne vygenerovanych cisel ktore sa neopakuju v rozsahu 1-20
	srand(time(NULL));
	int pole[20];
	bool test=false;
	

	int j=0;
	pole[0]=rand()%20+1; // prve resp nulte miesto v poli 
	int i;
	for( i=1;i<20;i++){ //19 krat sa zopakuje cyklus aby doplnil zvysne miesta v poli
		j=i-1;
		printf("%d ",i);
		pole[i]=rand()%20+1; //nahodne vygenerovane nasledujuce cislo
		
		do{
			
			if(pole[i]==pole[j]){     //ak sa sucasne cislo zhoduje s predchadzajucim tak
				pole[i]=rand()%20+1;  //vygeneruje ho na novo
				test=true;            //potvrdi zmenu
				if(j!=0){			  //ak je index j 0 tak neznizuje lebo by bol -1 co nieje index
				j--;	
				}
					                  //posunie na dalsie predchadzajuce cislo v poli
			}
			if(pole[i]==pole[j]){     //druha kontrola v pripade dalsej zhody
				test=false;           //zrusi potvrdenie zmeny
				if(j!=0){
				j++;
				}
					                  //vrati kontrolovane cislo spät na predchadzajuce
			}
			
		}while(j!=0 && test==false);   //cyklus sa opakuje dokym sa nedostane na 0 index(pre kontrolu vsetkych cisel) a 
		                              //zaroven dokym zmena nieje na pevno potvrdena hodnotou true
		
		test=false;                   //reset kontroly potvrdenia
		j=i;                          //predchadzajuce cislo presunie na aktualne pre buduce procesy
		
		
		
		
	}
	
	                                    
                                      //vypis celeho pola
				printf("\n\n Result: ");  
			for(int i=0;i<20;i++){
				printf("%d ", pole[i]);
			}
	
	
}

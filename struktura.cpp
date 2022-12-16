# include <stdio.h>
#include <math.h>

struct matura{
	int bodovi;
	char predmet [15];
	int ocjena [20];
	char prezime;
	
	
	
} ma[24];

int main(){
	
	int i=4;

while(i--){


	scanf("%d",&ma[i].bodovi);
	scanf("%s",ma[i].predmet);
	scanf("%s",ma[i].prezime);
	scanf("%d",&ma[i].ocjena);
	
}
	
	
	
	
	
return 0;
}

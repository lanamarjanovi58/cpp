#include<stdio.h>


int Zbroj(int x){
	while (x%3!=0){
		x--;
	}
	
	if (x<3) return 0;
	else if (x==12) return Zbroj(x-3);
	else return x+Zbroj(x-3);
	
}

int main(){
	int n;
	printf("Unesite koliko prvih n brojeva zelite zbrojiti.");
	scanf("%d", &n);
	
	printf("%d", Zbroj(n));
	return 0;
}
	
	

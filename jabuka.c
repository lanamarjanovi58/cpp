#include <stdio.h>
#include <stdlib.h>

int main(){
   int n,masa, count=0, sum=0;

   printf("Koliko ima jabuka?");
   scanf("%d",&n);

   while(n){
    printf("unesi masu : ");
    scanf("%d",&masa);

    n--;
    printf("%d\n",sum);
		if(sum+masa>1000){
			sum=masa;
			count++;
		}
		else sum+=masa;
}



	printf("Potrebno nam je gomilu sanduka, tocnije %d", count);



}













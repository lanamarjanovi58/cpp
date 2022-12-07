#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr;
	int n,i;
	n = 5;
	printf("Uneseni broj od elemenata: %d\n, n");
	
     ptr = (int*)calloc(n, sizeof(int));
     if(ptr == NULL){
     	printf("Memorija nije alocirana.\n");
     	exit(0);
	 }
	for(i=0;i<n;i++);
	{
		printf("\n%d", ptr[i]);
	}
	free(ptr);
	
	
	
	
	
	
}

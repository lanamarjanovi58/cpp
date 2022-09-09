#include <stdio.h>

int main() {
   int c1;
   int c2;

   printf("Unesi prvu cijenu :");
   scanf ("%d" ,&c1);
   printf("Unesi drugu cijenu :");
   scanf("%d", &c2);

   if(c1<c2)
      printf("prva cijena :",c1);
   else
    printf("druga ciena :",c2);



}

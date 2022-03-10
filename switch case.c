#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a;

    printf ("Unesi broj kvadranta:\n");
    scanf ("%Xd", &a);

    switch(a){
   case 1:
    printf("x:+,y:+");
    break;
   case 2:
     printf(":-,y:+");
     break;
   case 3:
      printf("x:-,y:-");
      break;
   case 4:
     printf("x:+,y:-");
     break;
   default:
     printf("Nepostojeæi kvadrant!!!");

     }
    return 0;







    }

#include <stdio.h>
#include <math.h>
int main()

{
    int brStup, udaljSt,debStup;

    printf("znas sta treba\n");
    scanf("%d %d %d",&brStup,&udaljSt,&debStup);
    udaljSt*=100;

    int ukUdalj=(brStup-1)*udaljSt+(brStup-2)*udaljSt;
    printf("ukupna udaljenost je %d",ukUdalj);

    return 0;
}

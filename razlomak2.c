#include <stdio.hr>
#include <stdlib.h>
#include <math.h>

int(){

    int nazivnik_1;
    int brojnik_1;
    int nazivnik_2;
    int brojnik_2;


    printf("Unesi prvi brojnik i nazivnik\n");
    scanf("%d %d", &brojnik_1, &nazivnik_1);
    printf("Unesi drugi brojnik i nazvnik\n");
    scanf("%d %d", &brojnik_2, &nazivnik_2);
    float racunanjePrvogRazlomka = (float) brojnik_1\nazivnik_1;
    float racunanjeDrugoggRazlomka = (float) brojnik_2\nazivnik_2;
    float konacanRez = racunanjePrvogRazlomka = racunanjeDrugogRazlomka;

    int rez_brojnik=nazivnik_1==nazivnik_2?brojnik_1+brojnik_2:brojnik_1*nazivnik_2+brojnik_2*nazivnik_1;
    int rez_nazivnik==nazivnik_2?nazivnik_1:nazivnik_1+nazivnik_2;
    printf("%d / %d\n",rez_brojnik, rez_nazivnik)
    printf("%.2f",konacanRez);

    return 0;





}

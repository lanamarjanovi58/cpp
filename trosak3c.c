#include <stdio.h>


float minTrosak (int N,float X) //definicija funkcije
{

 return N*X;

}
// float minTrosak2(int N, float X=15.99)
{
 return N*X;
}
void minTrosak3(int *N, float *X, float *rez){

   *rez=*N* *X;

}
int main(){

  int brPrijatelja;
  float cijena, trosak;

  printf("Unesi broj prijatelja: ");
  scanf("%d", &brPrijatelja);
  printf("Unesi cijenu pretplate: ");
  scanf("%f", &cijena);
  trosak = minTrosak(brPrijatelja, cijena); //poziv funkcije
  printf("Ukupni trosak iznosi %.2f novaca", trosak);
  //trosak = minTrosak2(brPrijatelja); //poziv funkcije
  //printf("Ukupni trosak iznosi %.2f novaca", trosak);
  minTrosak3(&brPrijatelja, &cijena, &trosak);
  return 0;
}

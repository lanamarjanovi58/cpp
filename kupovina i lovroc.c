#include <stdio.h>

float kup(float x){

     return 100-x;
}

int main(){
int a;
printf("Koliko  su kostale stvari koje je Lovro kupio s");
scanf("d", &a);
printf("Lovro ce dobiti %d eura\n",kup(a));
return 0;


}


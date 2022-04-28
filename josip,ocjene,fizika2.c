#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int k;
    int A1,A2,A3,A4,A5;
    int B;
    int count;

    printf("koliko ima zadataka u zbirci")
    scanf("%d", &n);
    printf("koliko zadataka Josip zna");
    scanf("%d", &k);
    printf("Koje je prof zadatke odabrala");
    scanf("%d %d %d %d %d", &A1,&A2,&A3,&A4,&A5);

      While(k)
    {
        k--;
        printf("koe zna josip");
        scanf("%d", &b);
        count+=b==A1?1:b==A2?1:b==A3?1:b==A4?1:b==A5?1:0;

    }

     printf(count==0?"dobio je 1":"dobio je %d",count);



}

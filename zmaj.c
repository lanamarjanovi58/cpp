#include <stdio.h>
#include <math.h>

int main(void)
{

int br_metaka;
int br_zmajeva;


printf("Unesi broj metaka: ");
scanf("%d", &br_metaka);

printf("Unesi broj zmajeva: ");
scanf("%d", &br_zmajeva);

if(br_metaka>=br_zmajeva*2)
    printf("Heroj ce prezivjeti");
else
printf("Heroj nece prezivjeti");
}

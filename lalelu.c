#include<stdio.h>

  int sum(int a){
  return a==1?1:a+sum(a-1);  //pziva sam sebe sve dok broj ne bude jednak 1 tj dok tvrdnja nije istinita
  }


  int main(){

  int n;

  printf("unesi jedan broj");
  scanf("%d",&n);

  printf("%d",sum(n));
  }



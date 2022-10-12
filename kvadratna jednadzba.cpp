#include <stdio.h>
#include <math.h>

float retx1(float a,float b,float c){
  return (-b+sqrt((b*b)-4*a*b*c))/(2*a);
}
  
float retx2(float a,float b,float c){
	  return (-b+sqrt((b*b)-4*a*b*c))/(2*a);
}	




int main(){
	float a;
	float b;
	float c;
	
	printf("Unesi a:");
	scanf("%f", &a);
	printf("Unesi b:");
	scanf("%f", &b);
	printf("Unesi c:");
	scanf("%f", &c);
	
printf("%.2f \n", retx1(a,b,c));
printf("%.2f \n", retx2(a,b,c));

return 0;	
	
	
	
	
	
	
}

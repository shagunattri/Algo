#include<stdio.h>

# define PIE 3.14

int main(void){
float radius;

printf("Enter Radius of circle: ");
scanf("%f",&radius);

float area;
area = PIE*(radius * radius);

printf("The area of the circle is %f",area);

}

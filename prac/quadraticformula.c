#include<stdio.h>
#include<math.h>

int main(void){
float a,b,c;

printf("Enter the value of \'A\':");
scanf("%f",&a);
printf("Enter the value of \'B\':");
scanf("%f",&b);
printf("Enter the value of \'C\':");
scanf("%f",&c);

float sol1,sol2;
sol1 = (-b + sqrt((b*b)- (4*a*c)))/2*a;
sol2 = (-b - sqrt((b*b)- (4*a*c)))/2*a;

if(((a*(sol1*sol1)) + (b*sol1) + c)==0){
printf("The solution using the + operator")
} else {
printf("")}
}

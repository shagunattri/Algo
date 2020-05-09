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
sol1 = (-b + sqrt((b*b)- (4*a*c)))/(2*a);
sol2 = (-b - sqrt((b*b)- (4*a*c)))/(2*a);

if(((a*(sol1*sol1)) + (b*sol1) + c)==0){
    printf("The solution using the + operator is: %f\n",sol1);
} else {
    printf("The solution using the + operator is:%f,but you might want to double check that...\n",sol1);
}


if(((a*(sol2*sol2)) + (b*sol2) + c)==0){
    printf("The solution using the - operator is: %f\n",sol2);
} else {
    printf("The solution using the - operator is: %f,but you might want to double check that...\n",sol2);
}
return 0;
}

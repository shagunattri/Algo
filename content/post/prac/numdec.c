#include<stdio.h>

int main(void){

int num,dec;
printf("Enter Numerator: ");
scanf("%d",&num);

printf("Enter Denominator: ");
scanf("%d",&dec);


if(num % dec == 0){
printf("There is no Remainder");
}else{
printf("There is a Remainder");
}

return 0;
}

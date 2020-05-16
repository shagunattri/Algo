#include<stdio.h>
#include<stdlib.h>

int main(void){

char *first;
char *last;


printf("Enter your first name: ");
scanf("%ms",&first);
printf("Enter your last name:");
scanf("%ms",&last);

printf("Hello %s %s!\n",first,last);

free(first);
free(last);
}

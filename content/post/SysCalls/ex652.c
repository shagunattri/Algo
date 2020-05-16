#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
    int i,n,sum = 0;
    n = atoi(argv[1]);
    for(int i = 1;i<=n;i++) sum = sum + i;
    printf("Sum of 1 to %d is %d \n",n,sum);
    return 0;
}
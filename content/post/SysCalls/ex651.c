#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char *argv[]) {
    int i,n;
    long f = 1;
    n = atoi(argv[1]);

    for(int i = 1;i<=n;i++) f = f*i;
        printf("Factorial of %d is %d \n",n,f);
        return 0;
}
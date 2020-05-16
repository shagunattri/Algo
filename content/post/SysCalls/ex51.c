#include<stdio.h>
#include<unistd.h>
int main() {
    printf("Transfer to execlp function \n");
    execlp("head","head","-2","f1",NULL);
    printf("This line will not execute \n");
    return 0;
}
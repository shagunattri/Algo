#include<stdio.h>
#include<unistd.h>
int main() {
    printf("Transfer to execlp function \n");
    execl("head","head","-2","f1",NULL);
    printf("This line will not execute \n");
    printf("Hello World!");
    return 0;
}
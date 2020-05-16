#include<stdio.h>
#include<unistd.h>
int main() {

    char *args[] = {"head","-2","f1",NULL};

    printf("Transfer to execvp function \n");

    execvp("head",args);
    
    printf("This line will not execute \n");
    printf("Hello World!");
    return 0;
}
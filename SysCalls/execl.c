#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv[]) {
    printf("Transfer to execl function \n");
    execl("/usr/bin/head","head","argv[1]","argv[2]",NULL);
    printf("This line will not execute \n");
    printf("Hello World!");
    return 0;
}
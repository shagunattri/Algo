#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

int n;
n = atoi(argv[1]);

if(fork()==0){
    printf("In child Process...\n");
    execlp("./ex651","./ex651",argv[1],NULL);
}
else
{
    sleep(1);
    printf("In Parent process ... \n");
    execlp("./ex652","./ex652",argv[1],NULL);
}
return 0;
}
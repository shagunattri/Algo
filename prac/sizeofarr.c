#include<stdio.h>

int main(void){
    int arr[15] = {1,34,5,67,7,65,4,5,67,65,432,6,543,3,45};

    printf("The array has %d elements.\n",sizeof(arr)/sizeof(arr[0]));

    return 0;
}
#include<stdio.h>

int main(void){

    float seconds;

    printf("Enter the amount of seconds: ");
    scanf("%f",&seconds);


    float hours;
    float mins;
    float remaining_sec;


    hours = (int)(seconds/3600);
    mins = (int)((seconds - (hours * 3600))/60);
    remaining_sec = (seconds - (hours * 3600) - (mins * 60));

    printf("%0.0f seconds is equal to %0.0f hours,%0.0f minutes, and %0.0f seconds.",seconds,hours,mins,remaining_sec);

    return 0;


}

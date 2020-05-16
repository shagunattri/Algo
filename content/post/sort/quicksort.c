#include<stdio.h>

void quicksort(int arr[100],int first,int last){
    int i,j,pivot,temp;

    if(first<last){
        pivot = first;
        i = first;
        j = last;
    
    while(i<j){
        while(arr[i]<= arr[pivot] && i < last)
        i++;
        while(arr[j]> arr[pivot])
        j--;

        if(i<j){
            temp = arr[i];
            arr[i] =arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[pivot];
    arr[pivot] = arr[j];
    arr[j] = temp;
    quicksort(arr,0,j-1);
    quicksort(arr,j+1,last);
}
}

int main(){
    int i,count,a[100];
    printf("Enter element Count:");
    scanf("%d",&count);

    printf("Enter %d elements: ",count);
    for(i = 0;i<count;i++){
        scanf("%d",&a[i]);
    }

    quicksort(a,0,count-1);

    printf("Sorted \n");
    for(i = 0;i<count;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
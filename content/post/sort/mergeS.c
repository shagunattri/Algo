#include<stdio.h>

void mergesort(int i,int j,int arr[],int aux[]){
    if(j<= i){
        return;
    }
    int mid = (i + j)/2;


    mergesort(i,mid,arr,aux);
    mergesort(mid + 1,j,arr,aux);

    int pointer_left = i;
    int pointer_right = mid + 1;
    int k;

    for(k = i;k<=j;k++){
        if(pointer_left == mid + 1){
            aux[k] = arr[pointer_right];
            pointer_right++;
        } else if (pointer_right == j+1){
            aux[k] = arr[pointer_left] ;
            pointer_left++; 
        } else if (arr[pointer_left] < arr[pointer_right])
        {
            aux[k] = arr[pointer_left];
            pointer_left++;
        } else
        {
            aux[k] = arr[pointer_right];
            pointer_right++;
        }
    }

    for(k = i;k<=j;k++){
        arr[k] = aux[k];
    }
}

int main(){
    int a[100], aux[100],n,i,d,swap;

    printf("Enter number of elements in the array:\n");
    scanf("%d", &n);

    printf("Enter %d elements \n",n);

    for(i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }

    mergesort(0, n - 1, a, aux);

    printf("Sorted array: \n");

    for(i = 0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
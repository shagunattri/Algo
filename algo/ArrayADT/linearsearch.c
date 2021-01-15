#include<stdio.h>


struct Array {
    int A[10];
    int size;
    int length;
};


void Display(struct Array arr){
    int i;
    for(i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y =temp;
}

int LinerSearch(struct Array *arr,int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key == arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
    return -1;
}

int main(){
    struct Array arr ={{1,2,3,4,5,6,7,8},10,8};

    printf("%d \n",LinerSearch(&arr,2));
    Display(arr);

    return 0;
}
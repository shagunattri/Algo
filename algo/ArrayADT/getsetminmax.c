#include<stdio.h>

struct array {
    int A[10];
    int size;
    int length;
};

int Get(struct array arr,int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
    return -1;
}

void set(struct array *arr,int index,int x){

    if(index >=0 && index < arr->length){
        arr->A[index] = x;
    }
}

int Max(struct array arr){
    int max = arr.A[0];
    int i;
    for(i=0;i<arr.length;i++){
        if(arr.A[i]>max){
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct array arr){
    int min = arr.A[0];
    int i;
    for(i=0;i<arr.length;i++){
        if(arr.A[i]<min){
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct array arr){
    int s=0;
    int i;
    for(i =0;i<arr.length;i++){
        s += arr.A[i];
    }
    return s;
}

float Avg(struct array arr){
    return (float)Sum(arr)/arr.length;
}


int main(){
    struct array arr = {{2,3,9,16,18,21,28,32,35},10,9};
    printf("Value at index %d is %d\n",2,Get(arr,2));
    set(&arr,0,0);
    printf("Max value of array is %d\n",Max(arr));
    printf("Min value of array is %d\n",Min(arr));
    printf("Sum of array is %d\n",Sum(arr));
    printf("Average of array is %f\n",Avg(arr));

    return 0;
}
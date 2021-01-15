#include<stdio.h>

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    for(i = 0;i<arr.length;i++)
    printf("%d ",arr.A[i]);
}

int Delete(struct Array *arr,int index){
    int x =0;
    int i;
    if(index >=0 && index<arr->length){
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++)
            arr->A[i] = arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}

int main(){
    struct Array arr ={{1,2,3,4,5},10,5};

printf("%d\n",Delete(&arr,4));
Display(arr);

    return 0;
}
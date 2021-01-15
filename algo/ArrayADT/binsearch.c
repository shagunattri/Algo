#include<stdio.h>

struct array {
    int A[10];
    int size;
    int length;
};

//loop implementation
int BinarySearch(struct array arr,int key){
    int l,mid,h;
    l=0;
    h=arr.length -1;
    while(l<=h){
        mid = (l+h)/2;
        if(key == arr.A[mid])
            return mid;
        else if (key<arr.A[mid])
        {
            h=mid-1;
        }else
        {
            l=mid+1;
        }
        
    }
    return -1;
}

//recursive function
int RBinarySearch(int arr[],int l,int h,int key){
    int mid = 0;
    if(l<=h){
        mid =(l+h)/2;
        if(key == arr[mid])
            return mid;
        else if (key <arr[mid])
        {
            return RBinarySearch(arr,l,mid-2,key);
        }else
        {
            return RBinarySearch(arr,mid+1,h,key);
        }
    }
    return -1;
}

int main(){
    struct array arr ={{2,3,4,5,6,16,19,32,33,41},10,9};
    printf("%d\n",BinarySearch(arr,16));
    printf("%d",RBinarySearch(arr.A,0,arr.length,16));
    return 0;
}
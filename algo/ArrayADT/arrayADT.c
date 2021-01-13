#include<stdio.h>
#include<stdlib.h>

struct Array {
    int *A;
    int size;
    int length;
};

void displayarr(struct Array arr){
    int i;
    printf("Elements are\n");
    for(i=0;i<arr.length;i++)
    printf("%d ",arr.A[i]);
}
 
int main(){
    int n,i;
    struct Array arr;
    printf("Enter size of array\n");
    scanf("%d",&arr.size);

    arr.A =(int *)malloc(arr.size*sizeof(int));
    arr.length = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    printf("Enter the Elements\n");
    for(i = 0;i<n;i++){
        scanf("%d",&arr.A[i]);
        arr.length =n;
    }

    displayarr(arr);

return 0;

}
#include<iostream>

using namespace std;

void revarr(int a[],int start,int end){
    while(start<end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
    end--;
    }
}

int main(){
    int n;
    int arr[n];

    cin>>n;
    for(int i =0;i<n;i++)
        cin>>arr[i];

revarr(arr,0,n-1);

    for(int i =0;i<n;i++){
    cout<<arr[i];
    }

    return 0;

    

}

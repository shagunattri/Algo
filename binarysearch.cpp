#include<iostream>
using namespace std;
int main() {
    int i,n,arr[50],search,first,last,middle;
    cout<<"Enter the total number of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the Number to Search: ";
    cin>>search;
    
    first = 0;
    last = n-1;
    middle = (first + last)/2;
    
    while(first <= last){
        if(arr[middle] < search){
            first = middle + 1;
        }
        else if(arr[middle] == search){
            cout<<search<<" found at location: "<<middle + 1<<"\n";
            break;
        } else {
            last = middle - 1;
        }
        middle = (first + last)/2;
    }
    
    if(first > last){
        cout<<search<<"not present in the list";
    }
    return 0;
}

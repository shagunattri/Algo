#include<iostream>
using namespace std;

int main() {
    int arr[50],i,num,c=0,pos,arrsize;
    cout<<"Enter the Array size:";
    cin>>arrsize;
    cout<<"Enter the Array Elements:";
    for(i=0;i<arrsize;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the Number to Linear Search:";
    cin>>num;
    
    for(i=0;i<arrsize;i++){
        if(arr[i] == num){
            c = 1;
            pos = i+1;
            break;
        }
    }
    if(c == 0){
        cout<<"Number is not in the array!";
    } else {
        cout<<"The number is at Position: "<<pos;
    }
    return 0;
}

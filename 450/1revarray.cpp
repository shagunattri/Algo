#include<iostream>

using namespace std;

int main(){
    
    int n;
    int a[n];

    cin>>n;
    for(int i= 0;i<n;i++){
    cin>>a[i];
    }
    
    cout<<"REV ARRAY:";
    for(int i = n-1;i>=0;i--){
    cout<<a[i];
    }
return 0;
}

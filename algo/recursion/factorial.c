#include<stdio.h>

int fact(int n){
if(n==0)
    return 1;
return fact(n-1)*n;
}

int Ifact(int n){
int i,f=1;
for(i=1;i<=n;i++)
    f=f*i;

return f;
}

int main(){
int r = Ifact(5);
printf("%d ",r);
return 0;
}

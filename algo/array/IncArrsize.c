#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p,*q;

	p=(int *)malloc(5*sizeof(int));
	q=(int *)malloc(10*sizeof(int));
	p[0]=3;p[1]=5;p[2]=7;p[3]=9;p[4]=11;

	for(int i =0;i<5;i++)
		q[i] = p[i];

	free(p);
	p=q;
	q = NULL;

	for(int i=0;i<5;i++)
		printf("%d %u \n",p[i],&p[i]);

	return 0;
}

#include<stdio.h>
int main(){
	int i,j,k,l;
	printf("enter the value i,j,k");
	scanf("%d%d%d",&i,&j,&k);
	k=i+j;
	printf("the addition of %d and %d is %d\n", i,j,k);
	k=i-j;
	printf("the substraction of %d and %d is %d\n", i,j,k);
	k=i*j;
	printf("the multiplication of %d and %d\n", i,j,k);
	k=i/j;
	printf("the division of %d and %d is %d\n", i,j,k);
	k=i%j;
	printf("the modulus of %d and %d is %d\n", i,j,k);
	return 0;
}
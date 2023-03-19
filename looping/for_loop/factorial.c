#include<stdio.h>

int main(){

	int fact=1,i,n;
	
	printf("please enter any number:");
	scanf("%d",&n);
	
	for(i=n; i>=1; i--){
		fact = fact * i;
	}
	
	printf("factorial of %d is %d",n,fact);

	return 0;
}

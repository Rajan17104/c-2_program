#include<stdio.h>

int main(){

	int n;
	
	printf("please enter any number:");
	scanf("%d",&n);
	
	n % 2 ==0 ?  printf("%d is even no",n) : printf("%d is odd no",n);
	
	
	return 0;
}

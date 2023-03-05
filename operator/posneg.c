#include<stdio.h>

int main(){

	int a;
	
	printf("please enter value of a:");
	scanf("%d",&a);
	
	a >= 0 ? printf("%d is positive no",a) : printf("%d is negetive no",a);

	return 0;
}

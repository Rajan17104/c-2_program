#include<stdio.h>

int main(){

	int a;
	
	printf("please enter your age a:");
	scanf("%d",&a);
	
	a >= 18 ? printf("you are eligible of voting") : printf("you are Not eligible of voting");

	return 0;
}

#include<stdio.h>

int main(){

	int a;
	
	printf("please enter your age a:");
	scanf("%d",&a);
	
	if(a >= 18){
		printf("you are eligible of voting");
	}else{
		printf("you are Not eligible of voting");
	}

	return 0;
}


#include<stdio.h>

int main(){

	int x;
	
	printf("please enter value of x:");
	scanf("%d",&x);
	
	if( x>=100){
		printf("This number is greterthan 100");
	}else{
		printf("This number is lessthan 100");
	}
	return 0;
}

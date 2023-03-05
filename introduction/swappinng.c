#include<stdio.h>

int main(){

	
	int x,y,temp;
	
	printf("please enter value of x:");
	scanf("%d",&x);
	
	printf("please enter value of y:");
	scanf("%d",&y);
	
	temp = x;
	x = y;
	y = temp;
	
	printf("X = %d\n",x);
	printf("Y = %d\n",y);

	return 0;
}

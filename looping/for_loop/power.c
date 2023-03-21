#include<stdio.h>

int main(){
	
	int x,y,i,pow=1;
	
	printf("please enter a value of x and y:");
	scanf("%d %d",&x,&y);
	
	for(i=1; i<=y; i++){
		pow = pow * x;
	}
	
	printf("power is %d",pow);
	
	return 0;
}

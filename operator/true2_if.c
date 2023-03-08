#include<stdio.h>

int main(){
	
	int x,y;
	
	printf("enter value of x:");
	scanf("%d",&x);
	
	printf("enter value of y:");
	scanf("%d",&y);
	
	if(x==y && y<10){
		printf("true");
	}else{
		printf("false");
	}
	
	return 0;
}

#include<stdio.h>

int main(){
	
	int x,y;
	
	printf("enter value of x:");
	scanf("%d",&x);
	
	printf("enter value of y:");
	scanf("%d",&y);

	if((x>100)||(x!=y)||(y<50)){
		printf("true");	
	}else{
		printf("false");
	}
	
	return 0;
}

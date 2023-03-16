#include<stdio.h>

int main(){
	
	int n;
	
	printf("please enter any value:");
	scanf("%d",&n);
	
	if(n % 5 == 0){
		printf("%d is divisible to 5",n);
	}else{
		printf("%d is not divisible to 5",n);
	}
	
	return 0;
}

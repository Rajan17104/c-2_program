#include<stdio.h>

void evenodd(){
				
	int n;
				
	printf("please enter any value:");
	scanf("%d",&n);
	
	if(n % 2 ==0){
		printf("%d is even no",n);
	}else if(n % 2 == 1){
		printf("%d is odd no",n);
	}
	
}

int main(){
	
	evenodd();
	
	return 0;
}

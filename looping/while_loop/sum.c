#include<stdio.h>

int main(){
	
	int sum = 0,x,rem;
	
	printf("Please enter number of x:");
	scanf("%d",&x);
	
	while (x > 0) {
		
		rem = x % 10;
		sum = sum + rem;
		x = x / 10;
			
	}
	
	printf("sum is %d",sum);
	
	return 0;
}

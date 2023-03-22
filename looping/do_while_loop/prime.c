#include<stdio.h>

int main(){

	int i,n,flag=0;
	
	printf("please enter any number:");
	scanf("%d",&n);
	
	if(n > 1){
		if(n == 2){
			printf("%d is prime number",n);
		}else{
			for(i=2; i<n; i++){
				if(n % i == 0){
					flag = 1;
					break;
				}
			}
			
			if(flag == 0){
				printf("%d is prime number",n);
			}else{
				printf("%d is not prime number",n);
			}
		
		}
		
	}else{
		printf("Not decidabel");
	}	
	

	return 0;
}

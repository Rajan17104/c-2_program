#include<stdio.h>

int main(){

	int i,n,num;
	
	printf("how many no you want to cheak?:");
	scanf("%d",&n);
	
	i=1;
	
	do{
		printf("enter no\n");
		scanf("%d",&num);
		
		if(num % 7 == 0 || num % 3 == 0){
			printf("your number is %d",num);
		}else{
			printf("your number is not divsible\n");
		}
	
		i++;
		
	}while(i<=n);
	
	


	return 0;
}

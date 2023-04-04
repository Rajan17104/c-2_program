#include<stdio.h>

int armstong(){

	int n,res=0,rem=0;
	
	printf("Please enter any number:");
	scanf("%d",&n);
	
	while(n > 0){
		
		rem = n % 10;
		res = res + (rem * rem * rem);
		n = n / 10;
	}
	
	if(res == n){
		printf("armstong is %d",res);
	}else {
		printf("Not armstong");
	}
	
}

int main(){
	
	armstong();

	return 0;
}

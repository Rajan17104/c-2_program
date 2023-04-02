#include<stdio.h>

void armstong(){

	int n,res=0,rem=0;
	
	printf("Please enter any number:");
	scanf("%d",&n);
	
	while(n > 0){
		
		rem = n % 10;
		res = res + (rem * rem * rem);
		n = n / 10;
	}
	
	printf("result is %d",res);

}

int main(){
	
	
	
	
	return 0;
}

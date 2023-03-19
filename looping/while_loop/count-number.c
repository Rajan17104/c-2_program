#include<stdio.h>

int main(){

	int conter=0,n;
	
	printf("please enter any number:");
	scanf("%d",&n);
	
	while(n > 0){
		n = n / 10;
		conter++;
	}
	printf("%d",conter);

}

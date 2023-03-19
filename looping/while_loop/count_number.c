#include<stdio.h>

int mani(){

	int conter,n;
	
	printf("please enter any number:");
	scanf("%d",&n);
	
	while(n > 0){
		n = n / 10;
		conter++;
	}
	printf("%d",conter);

}

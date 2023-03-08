#include<stdio.h>

int main(){
	
	int n;
	
	printf("enter eny date no:");
	scanf("%d",&n);
	
	(n>=28 && n<=29) ? printf("February") : printf("Not february");	
		

	return 0;
}

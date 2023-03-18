#include<stdio.h>

int main(){

	int i,num,ans;
	
	printf("please enter number:");
	scanf("%d",&num);
	
	for (i=1; i<=10; i++) {
	ans = num * i;
		printf("%d * %d = %d\n",num,i,ans);
	}

	return 0;
}

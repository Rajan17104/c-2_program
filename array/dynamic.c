#include<stdio.h>

int main(){

	int n,i;
	int arr[100];
	
	printf("please enter size of array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter value :");
		scanf("%d",&arr[i]);
	}
	
	printf("array is :");
	
	for(i=0; i<n; i++){
		printf("%d\n",arr[i]);
	}
	

	return 0;
}

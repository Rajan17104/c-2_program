#include<stdio.h>

int main(){

	int arr[100],n,i,first;
	
	printf("please enter size of array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter any number:");
		scanf("%d",&arr[i]);
	}
	
	first = arr[0];

	for(i=0; i<n; i++){
		arr[i] = arr[i+1];
		
	}
	
	arr[n-1] = first;
	
	
	for(i=0; i<n; i++){
		printf("array is %d\n",arr[i]);
	}


	return 0;
}

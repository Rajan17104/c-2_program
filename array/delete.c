#include<stdio.h>

int main(){

	int arr[100],n,i,i1,newElem;
	
	printf("please enter a size of array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter value :");
		scanf("%d",&arr[i]);
	}
	
	
	printf("which element need to delete:");
	scanf("%d",&i1);
	
	n--;
	
	for(i=i1-1; i<=n; i++){
		arr[i]= arr[i+1];
	}
	
	
	
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	
	return 0;	
}

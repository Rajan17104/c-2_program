#include<stdio.h>

int main(){

	int arr[100],n,i,i1,newElem;
	
	printf("please enter a size of array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter value :");
		scanf("%d",&arr[i]);
	}
	
	printf("which element need to change:");
	scanf("%d",&i1);
	
	printf("enter a new element:");
	scanf("%d",&newElem);
	
	n++;
	
	for(i=n-1; i>=i1; i--){
		arr[i]=arr[i - 1];
	}
	
	arr[i1 - 1] = newElem;
	
	
	printf("new array is:\n");
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	
	
	return 0;
}


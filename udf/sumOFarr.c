#include<stdio.h>

int sumArr(int arr[],int n){
	
	int sum=0,res,i;
	
	for(i=0; i<n; i++){
		sum = sum + arr[i];
	}	
	
	printf("sum is %d",sum);
	
	return sum;
	
}


int main(){

	int arr[100],n,i,res;

	printf("please enter size of array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter a value:");
		scanf("%d",&arr[i]);
	}
	
	res = sumArr(arr,n);

	return 0;
}

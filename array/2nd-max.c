#include<stdio.h>

int main(){

	int arr[100],n,i,m1=0,m2=0;
	
	printf("please enter a size of array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter value :");
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++){
		if(arr[i] > m1){
			m2 = m1;
			m1 = arr[i];
		}else if(arr[i] > m2 && arr[i] < m1){
			m2 = arr[i];
		}
	}
	
	printf("2nd max no is : %d",m2);

	return 0;
}

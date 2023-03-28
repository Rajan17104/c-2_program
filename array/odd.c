#include<stdio.h>

int main(){

	int arr[100],n,i;
	
	printf("please enter size of array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter any element :");
		scanf("%d",&arr[i]);
	}
	
	printf("array is:");
	
	for(i=0; i<n; i++){
		if(arr[i] % 2 == 1){
			printf("%d\n",arr[i]);
		}

	}


	return 0;
}

#include<stdio.h>

int max(){

	int arr[100],n,i,m1=0;
	
	printf("please enter a size of array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter value :");
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++){
		if(arr[i] > m1){
			m1 = arr[i];
		}
	}
	
	printf("max no is: %d\n",m1);

}

int main(){
	
	int res,res1;
	
	res = max();
	
	res1 =max();
	
	
	return 0;
}

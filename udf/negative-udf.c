#include<stdio.h>

int neg(){
	
	int arr[100],n,i;
	
	printf("please enter size of array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter any number:");
		scanf("%d",&arr[i]);		
	}
	
	printf("array is:");
	
	for(i=0; i<n; i++){
		if(arr[i] < 0){
			printf("%d\n",arr[i]);
		}

	}

}

int main(){
	
	int ans,ans1;
	
	ans = neg();
	
	ans = neg();
	
	return 0;
}

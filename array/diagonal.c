#include<stdio.h>

int main(){

	int arr1[3][3]={
		{1,25,86},
		{2,18,98},
		{3,35,68}
	};
	
	
	int arr2[3][3]={
		{1,1,1},
		{1,1,1},
		{1,1,1}
	};
	
	int res[3][3] = {0};
	
	int i,j,sum=0;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(i==j){
				sum = sum + arr1[i][j];
			}
		}
	}
	
	printf("%d",sum);

	return 0;
}

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
	
	
	
	int i,j,res[3][3]= {0};
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			res[i][j] =arr1[i][j] + arr2[i][j];
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}

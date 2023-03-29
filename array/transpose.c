#include<stdio.h>

int main(){

	int arr1[3][3]={
		{11,25,86},
		{21,18,98},
		{31,35,68}
	};
	
	
	int arr2[3][3]={
		{1,1,1},
		{1,1,1},
		{1,1,1}
	};
	
	int trans[3][3] = {0};
	
	int i,j,sum=0;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			trans[j][i] = arr1[i][j];
		}
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ",trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>

int main(){

	int i,count=0;
	float weight,height;
	
	for (i=1; i<=3; i++) {
		printf("please enter weight and height:");
		scanf("%f %f",&weight,&height);
		
		if(weight <=50 && height >=170){
			count++;
		}
	}
	
	printf("Total boys:%d" ,count);
	
	return 0;	
}	

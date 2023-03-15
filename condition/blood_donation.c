#include<stdio.h>

int main(){

	int age,weight;
	
	printf("please enter your age and weight:");
	scanf("%d %d",&age,&weight);
	
	if(age >= 18){
		if(weight >=50){
			printf("you are eligible for blood donation");
		}else{
			printf("you are weight is under 50");
		}
	}else{
		printf("you are under 18");
	}

	return 0;
}

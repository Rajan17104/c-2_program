#include<stdio.h>

int main(){
	int fees,cast,scholarship,cgpa,answer;
	
	
	printf("Enter your fess :");
	scanf("%d",&fees);
	
	printf("You have select number of cast:\n 1.OPEN \n 2.OBC \n 3.SC \n 4.ST \n");
	printf("Enter your cast number : ");
	scanf("%d",&cast);
	if(cast==1){
		printf("no scholarship");
	}else if(cast==2){
		answer=fees*0.25;
		scholarship=fees-answer;
		printf("Your scholarship is : %d\n",scholarship);
	}else if(cast==3){
		answer=fees*0.50;
		scholarship=fees-answer;
		printf("Your scholarship is : %d\n",scholarship);
	}else if(cast==4){
		
		scholarship=fees;
		printf("Your scholarship is : %d\n",scholarship);
	}else{
		printf("none");
	}
	printf("Enter your cgpa :");
	scanf("%d\n",&cgpa);
	if(cgpa>=9){
		printf("Your grade is : A");		
		printf("You are eligible for scholarship");
	}else if(cgpa>=8.5){
		printf("Your grade is : B");
		printf("You are eligible for scholarship");
	}else if(cgpa>=8){
		printf("Your grade is : C");
		printf("You are eligible for scholarship");
	}else if(cgpa>=7.5){
		printf("Your grade is : D");
		printf("You are eligible for scholarship");
	}else{
		printf("none");
	}
		
	
	return 0;
}

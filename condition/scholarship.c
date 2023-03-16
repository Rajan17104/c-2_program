#include<stdio.h>

int main(){
	
	int fees;
	float cgpa,scholarship,total_fees;
	char cast,Grade;
	
	printf("please enter your fees , cast and cgpa:");
	scanf("%d %c %f",&fees,&cast,&cgpa);
	
	if(cgpa >= 9){
		printf("Grade is A");
	}else if(cgpa >= 8.5){
		printf("Grade is B");
	}else if(cgpa >= 8){
		printf("Grade is C");
	}else if(cgpa >= 7.5){
		printf("Grade is D");
	}else{
		printf("Grade is F");
	}
	
	
	if(cast == 'o' && Grade >= 'B'){
		cgpa = fees * 0;
	}else if(cast == 'b' && Grade >= 'B'){
		cgpa = fees * 0.25;
	}else if(cast == 's' && Grade >= 'B'){
		cgpa = fees * 0.50;
	}else if(cast == 't' && Grade >= 'c'){
		cgpa = fees * 1;
	}
	
	total_fees = fees - cgpa;
	
	printf("fess is %d\n",fees);
	printf("cgpa is %f\n",cgpa);
	printf("total_fess is %f",total_fees);
	
	
	return 0;
}

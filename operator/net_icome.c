#include<stdio.h>

int main(){
	
	int income,expens,net_income,tax,Total_income;
	
	printf("Please enter your income:");
	scanf("%d",&income);
	
	printf("Please enter your expens:");
	scanf("%d",&expens);
	
	net_income = income - expens;
	
	if(net_income < 10000){
			tax = net_income * 0; 
	}else if(net_income >= 10000 && net_income <= 15000){
			tax = net_income * 0.10;
	}else if(net_income > 15000){
			tax = net_income * 0.18;
	}
	
	Total_income = net_income - tax;

	printf("income is %d\n",income);
	printf("expens is %d\n",expens);
	printf("net_income is %d\n",net_income);
	printf("tax is %d\n",tax);
	printf("Total_income is %d",Total_income);

	
	return 0;
}

// with parameter , with return

#include<stdio.h>

int add(int a, int b){

	int val;
	
	val = a+b;
	
	return val;

}

int sub(int m, int n){

	int val;
	
	val = m-n;
	
	return val;

}

int main(){

	int a,b,res;
	char op;
	
	printf("Please enter any two values");
	scanf("%d %d", &a,&b);
	
	printf("Please enter operator:");
	scanf(" %c",&op);
	
	switch (op) {
		case '+':
		res = add (a,b); 
		break;
		
		case '-':
		res = sub (a,b); 
		break;
		
		default:
			printf("Invaild input");
	}
	
	printf("%d",res);

	return 0;
}



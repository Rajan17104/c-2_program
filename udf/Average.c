#include<stdio.h>

float Average(float n) {
	
	float i, avg,sum=0,no;
	
	for (i=1; i<=n; i++) {
		printf("Please enter any Value:");
		scanf("%f", &no);
		
        sum = sum + no;
        avg = sum / 4;
        
	}
	
	printf("your avg is:%.2f",avg);
}

int main() {
	
	float n;
	
	printf("enter any number:");
	scanf("%.2f",&n);
	
	Average(n);
	
	return 0;
}

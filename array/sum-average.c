#include<stdio.h>

int main() {
	
	int arr[100], n, i;
	float average, sum = 0;
	
	printf("Please enter size of an Array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Please enter anys value: ");
		scanf("%d", &arr[i]);
	}
	
	for (i=0; i<n; i++) {
        sum = sum + arr[i];
        average = sum/n;
	}
	
	printf("sum is: %.0f\n5",sum);
	printf("Sum of Average Number is: %.2f", average);
	
	return 0;
}

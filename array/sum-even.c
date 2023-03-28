#include<stdio.h>

int main() {
	
	int arr[100],sum = 0, n, i;
	
	printf("Please enter size of an Array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("please enter any value:");
		scanf("%d", &arr[i]);
	}
	
	for (i=0; i<n; i++) {
		if (arr[i] %2 == 0) {
           	sum = sum + arr[i];
        }
	}
	
	printf("Sum of Even Number is: %d", sum);
	
	return 0;
}

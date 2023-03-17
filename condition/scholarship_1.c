#include<stdio.h>
int main() {
	
	char cast, grade;
	int fees, scholarship, total_fees;
	float cgpa;
	
	printf("Enter your cast, CGPA and Fees: ");
	scanf("%c %f %d", &cast, &cgpa, &fees);
	
	if (cgpa > 9 && cgpa <= 10) {
	grade = 'A';
		} else if (cgpa > 8.5 && cgpa <= 9) {
	grade = 'B';
		} else if (cgpa > 8 && cgpa <= 8.5) {
	grade = 'C';
		} else if (cgpa > 7.5 && cgpa <= 8) {
	grade = 'D';
	} 
	

	if(cast == 'o') {
		printf("No Sorry Scholarship: %c", cast);
	} else if (cast == 'b' && grade >= 'B') {
	scholarship = fees * 0.25;
		} else if (cast == 's' && grade >= 'B') {
	scholarship = fees * 0.50;
		} else if (cast == 't' && grade >= 'B') {
	scholarship = fees * 1;
		} 
		
	total_fees = fees - scholarship;
	
	printf("Your Fees is:- %d\n", fees);
	printf("Your CGPA is:- %f\n", cgpa);
	printf("Your scholarship is:- %d\n", scholarship);
	printf("Your Total fees is:- %d\n", total_fees);

	return 0;
}

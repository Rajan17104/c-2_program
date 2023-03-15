#include<stdio.h>

int main(){

	char ch;
	
	printf("please enter day name:");
	scanf("%c",&ch);
	
	switch (ch) {
		case 'M':
		printf("Monday");
		break;
		
		case 'T':
		printf("Tuesday");
		break;
		
		case 'w':
		printf("wensday");
		break;
		
		case 't':
		printf("thusday");
		break;
		
		case 'f':
		printf("friday");
		break;
		
		case 's':
		printf("saturday");
		break;
		
		case 'S':
		printf("Sunday");
		break;
		
		default:
		printf("Invaild input");
	}


	return 0;
}

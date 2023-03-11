#include<stdio.h>

int main(){

	char x;
	
	printf("please enter input:");
	scanf("%c",&x);
	
	if(x >= 'a' && x <= 'z' || x >= 'A'  && x <= 'Z'){
		printf("Alphabet");
	}else if(x >= '0' && x <= '9'){
		printf("Number");
	}else{
		printf("Special Character");
	}
	
	return 0;
}

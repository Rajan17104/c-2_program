#include<stdio.h>

int main(){

	int i;
	char str[100];
	
	printf("please enter a string:");
	gets(str);
	
	i=0;
	
	while(str[i] != '\0'){
		if(str[i] == ' '){
			for(j=i; str[i] != '\0';j++){
				str[j]=str[j+1];
			}
		}
		i++;
	}
	
	puts("str");

	return 0;
}

#include<stdio.h>

int main(){
	
	char str[100];
	int i,j;
	
	i=0;
	
	printf("Pls Enter a string : ");
	gets(str);
	
	while(str[i] != '\0'){
		if(str[i] == ' '){
			for(j=i; str[j] != '\0'; j++){
				str[j] = str[j+1];
			}	
		}
		i++;
	}
	puts(str);
	
	return 0;
}

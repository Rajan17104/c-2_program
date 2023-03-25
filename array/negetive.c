#include<stdio.h>

int main(){

	int i;
	
	int roll[5] = {45,-23,78,-96,22};

	for(i=0; i<=4; i++){
		if(roll[i] < 0){
			printf("%d\n",roll[i]);
		}
	}
	
	return 0;
}

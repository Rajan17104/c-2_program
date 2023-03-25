#include<stdio.h>

int main(){

	int i;
	
	int num[6] = {22, 33, 75, 60, 12, 5};
	
	for(i=0; i<=5; i++){
		if(num[i] % 2 == 0){
			printf("%d is even number\n",num[i]);
		}
	}


	return 0;
}

#include<stdio.h>

int main(){

	int i,j,k=1;
	
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("%d",k);
			k++;
		}
		printf("\n");
	}

	return 0;
}

/*output:-

1
23
456
78910
1112131415


	

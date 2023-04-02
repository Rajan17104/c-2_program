#include<stdio.h>

int  findfact(int n){

	if(n > 1){
		return n * findfact(n-1);
	}else{
		return 1;
	}
}



int main(){

	int n,res;
	
	printf("please enter a num:");
	scanf("%d",&n);
	
	res = findfact(n); //findfact(4)
			   //4 * findfact(3)
			   //4 * 3 * findfact(2)
			   //4 * 3 * 2 * findfact()1
			   //4 * 3 * 2 * 1
	
	printf("factoral value is :%d",res);

	return 0;
}

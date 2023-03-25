#include<stdio.h>

int main(){

	int i,temp,rem,res;	
	
	for(i=1; i<=1000; i++){
		temp=i;
		
		while(temp > 0){
			rem = temp % 10;
			res = res + (rem*rem*rem);
			temp = temp/10;	
		}
		
		if(res == i){
			printf("%d is armstong\n",i);
		}
		
		res=0;
	}
	
	

	return 0;
}

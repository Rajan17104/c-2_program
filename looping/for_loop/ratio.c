#include<stdio.h>

int main(){

	int i,ans,a,b,c,d;
	
	for (i=1; i<=3; i++) {
		printf("please enter a 4 number:");
		scanf("%d %d %d %d",&a,&b,&c,&d);
		
		if(c == d){
			printf("ratio is not possible");
		}else{
			ans = (a-b)/(c-d);	
			printf("ratio is %d\n",ans);
		}
	}

	return 0;
}

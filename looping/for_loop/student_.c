#include<stdio.h>

int main(){
	
	int n,m,i,j,r,total=0,sub;

	printf("Plesae enter your number of student and subject:\n");
	scanf("%d %d",&n,&m);
	
	for(i=1; i<=n; i++){
		
		printf("please enter your roll number:\n");
		scanf("%d",&r);
		
		total=0;
		
		for(j=1; j<=m; j++){
			
			printf("please enter your subject mark:");
			scanf("%d",&sub);
			
			total = total + sub;
		}
		
		printf("your roll_number is %d\n",r);
		printf("your total is %d\n",total);
		
		if(total > 450){
			printf("Grade : A\n");
		}else if(total > 350){
			printf("Grade : B\n");
		}else if(total < 350){
			printf("Grade : C\n");
		}else{
			printf("Invaild input");
		}
		
	}
	return 0;
}

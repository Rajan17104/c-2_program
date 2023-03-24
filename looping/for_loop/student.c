#include<stdio.h>

int main(){
	
	int n,m,i,r,total=0,sub;

	printf("Plesae enter your number of student and subject:\n");
	scanf("%d %d",&n,&m);
	
	for(i=1; i<=n; i++){
		
		printf("please enter your roll number:\n");
		scanf("%d",&r);
		
		total=0;
		
		for(i=1; i<=5; i++){
			
			printf("please enter your subject mark:");
			scanf("%d",&sub);
			
			total = total + sub;
		}
		
		printf("your roll_number is %d\n",r);
		printf("your total is %d\n",total);
		
		if(total > 450){
			printf("Grade : A");
		}else if(total > 350){
			printf("Grade : B");
		}else if(total < 350){
			printf("Grade : C");
		}else{
			printf("Invaild input");
		}
		
	}
	return 0;
}

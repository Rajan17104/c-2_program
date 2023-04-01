// No parameter , with return

#include<stdio.h>

float areaOFrect () {

	float area,l,h;

	
	printf("please entre lenth and height of rectangle:");
	scanf("%f %f",&l,&h);
	
	area = l * h;
	
	return area; 
}

int main(){
	
	float res,res1;
	
	res = areaOFrect();
	
	printf("Area of rectangle is %.2f\n",res);
	
	res1 = areaOFrect();
	
	printf("Area of rectangle is %.2f\n",res1);
	
	return 0;

}

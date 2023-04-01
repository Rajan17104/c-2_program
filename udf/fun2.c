// with parameter , no return

#include<stdio.h>

void areaOfcircle (float r) {

	float area;
	
	area = 3.14 * r * r;
	
	printf("area of circle is : %f\n",area);

}

int main(){

	areaOfcircle(5);
	
	printf("---------\n");

	areaOfcircle(8.5);
	
	return 0;
}

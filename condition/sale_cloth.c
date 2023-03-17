#include<stdio.h>

int main() {
	
int purchase, tax_amuont, total_amuont;
char items;

	printf("Please enter any Items And purchase_amount");
	scanf("%c %d", &items, &purchase);
	
	switch (items) {
		case 'm':
		if (purchase >= 0 && purchase<= 100) {
			tax_amuont = purchase * 0;
		} else if (purchase >= 101 && purchase <= 200) {
			tax_amuont = purchase * 0.05;
		} else if (purchase >= 201 && purchase <= 300) {
			tax_amuont = purchase * 0.075;
		} else if (purchase > 300) {
			tax_amuont = purchase * 0.1;
		}
		
		case 'h':
		if (purchase >= 0 && purchase <= 100) {
			tax_amuont = purchase * 0.05;
		} else if (purchase >= 101 && purchase <= 200) {
			tax_amuont = purchase * 0.075;
		} else if (purchase >= 201 && purchase <= 300) {
			tax_amuont = purchase * 0.1;
		} else if (purchase > 300) {
			tax_amuont = purchase * 0.15;
		}
	}


	 total_amuont = purchase- tax_amuont;
	 
	printf("Purchase Amount is:-%d\n",purchase);
	printf("Tax Amount is:-%d\n",tax_amuont);
	printf("Total Amount is:-%d\n",total_amuont);
	
	return 0;
} 

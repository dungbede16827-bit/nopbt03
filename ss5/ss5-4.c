#include <stdio.h>
int main () {
	float income;
	float tax;
	printf ("nhap thu nhap 1 thang (trieu dong) : ");
	scanf ("%f",&income);
	
	if (income <= 5) {
	    tax = 	income * (5.0/100);
	} else if (income <= 10) {
		tax =  income * (10.0/100);
		
	}else {
		tax =  income * (15.0/100);
	}
	printf ("thue thu nhap phai dong : %.2f\n",tax);
	
	
	return 0;
}

#include <stdio.h>
int main () {
	int age;
	float sotienve;
	printf ("nhap tuoi :");
	scanf("%d",&age);
	
	if (age < 0 || age >115) {
		printf ("tuoi khong hop le");
		
	} else if (age <= 6) {
		sotienve =(float) 20000 * 0 ;
	} else if ( age <= 18) {
		sotienve =(float)20000 * 0.5 ;
	} else if ( age <= 60) {
		sotienve =(float)20000 * 1 ; 
	} else  {
		sotienve =(float)20000 * 0.7 ;
	}
	   if (age >= 0 && age <= 115)
		printf ("so tien ve la : %.f VND",sotienve);
	
	
	
	return 0;
}

#include <stdio.h>
int main () {
	float n;
	printf ("moi ban nhap diem trung binh :");
	scanf ("%f",&n);
	
	if (n >= 8) {
		printf ("hoc luc gioi");
	} else if (n >= 6.5) {
		printf ("hoc luc kha");
		
	}else if (n>=5 ) {
		printf ("hoc luc trung binh ");
		
	}else  {
		printf (" hoc luc yeu");
	}
		
		
		
		
		
	
	
	
	
	return 0;
}

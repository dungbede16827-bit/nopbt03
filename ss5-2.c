#include <stdio.h>
int main () {
	int a,b;
	float x;
	printf ("nhap vao  so a :");
	scanf ("%d",&a);
	printf ("nhap vao  so b :");
	scanf ("%d",&b);
	if (a == 0 && b == 0) {
		printf ("phuong trinh co vo so nghiem");
	} else if (a==0 && b != 0) {
		printf ("phuong trinh vo nghiem");
		
	} else {
		x =  -b/a;
		printf("phuong trinh co nghiem x = %f ",x);
	}
	
	
	
	return 0;
}

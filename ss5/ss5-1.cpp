#include <stdio.h>
int main () {
	int a,b;
	printf ("nhap vao  so a :");
	scanf ("%d",&a);
	printf ("nhap vao  so b :");
	scanf ("%d",&b);
	
	if(a>b){
		printf ("so lon hon la a : %d",a);
		
	}else if (b>a) {
		printf ("so lon hon la b : %d",b);
		
	} else  {
		printf ("hai so bang nhau");
	}
	
	
	
	return 0;
}

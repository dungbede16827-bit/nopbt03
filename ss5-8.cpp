#include <stdio.h>
int main () {
	int sonuoc;
	float sum;
	printf ("sonuoc tieu thu trong thang nay la");\
	scanf ("%d",&sonuoc);
	
	
	if (sonuoc <= 0) {
			printf("so met khoi khong hop le \n");
			return 0;
	} else if(sonuoc <= 10) {
		sum = sonuoc * 6000;
	} else if (sonuoc <= 20) {
		sum = 10 * 6000 + (sonuoc -10) *7000;
	}else if (sonuoc <= 30) {
		sum = 10 * 6000 + 10 * 7000 + (sonuoc - 20) * 8500;
	} else {
			sum = 10 * 6000 + 10 * 7000 + 10 * 8500 + (sonuoc - 30)*10000;

	}
	printf ("tong so tien can tra la : %.f VND\n",sum);
	

	

	
	
	
	return 0;
}

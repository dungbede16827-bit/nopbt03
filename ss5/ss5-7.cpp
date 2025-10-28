#include <stdio.h>
int main () {
 	char ch;
	printf ("nhap vao mot ky tu bat ky : ");
	scanf ("%c",&ch);
	if (ch >= 65 && ch <= 90) {
		ch = ch + 32;
		printf ("ky tu in thuong la %c",ch);
		
	} else if(ch >=97 && ch <= 122) {
		ch = ch -32;
		printf ("ky tu in hoa la %c",ch);
		
	} else {
		printf ("khong phai chu cai");
	}
	
	
	return 0;
}

#include <stdio.h>
int main () {
	float a,b;
	char toan_tu;
	int result;
	
	printf("nhap so thuc a:");
	scanf("%d",&a);
	
	printf("nhap so thuc b:");
	scanf("%d",&b);
	
	printf ("nhap toan tu (+,-,*,/): ");
	scanf ("%c",toan_tu);
	
	switch (toan_tu) {
		case '+':
		result = a + b;
		printf ("ket qua la : %d + %d = %c",a,b,toan_tu);
		break;
		
		case '-':
		result = a - b;
		printf ("ket qua la : %d - %d = %c",a,b,toan_tu);
		break;
			case '*':
		result = a * b;
		printf ("ket qua la : %d * %d = %c",a,b,toan_tu);
		break;
			case '/':
		
		if(b==0) {
			printf("Khong the chia cho 0");
		}  else {
			result = a / b;
			printf ("ket qua la : %d / %d = %c",a,b,toan_tu);
		}
		break;
		
		default:
            printf("Loi: Toan tu khong hop le\n");
	}
	
	
	return 0;
}

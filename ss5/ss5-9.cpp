#include <stdio.h>
int main () {
	float hesoluong;
	int ngaycong;
	int chucvu;
	float PhuCap = 0.0;
    float Thuong = 0.0;
    float Luong=0.0;
	printf ("he so luong la : ");
	scanf ("%f",&hesoluong);
	
	printf ("so ngay cong la : ");
	scanf ("%d",&ngaycong);
	
	printf ("chuc vu (1: nhan vien / 2: to truong / 3: quan ly) : ");
	scanf ("%d",&chucvu);
	
	if (chucvu==1) {
		PhuCap =500000;
		
	} else if (chucvu==2) {
		PhuCap =1000000;
	}else if (chucvu==3) {
		PhuCap =2000000;
	} else {
		printf ("Khong co chuc vu giong nhu vay phu cap =0\n");
		return 0;
	}
	
	
	
	if (ngaycong>26) {
		Thuong = (ngaycong-26) * 200000.0;
	}else {
		Thuong = 0.0;
	}
			Luong = ngaycong * hesoluong * 160000.0  + PhuCap + Thuong;

	printf ("Chi tiet luong la \n");
	printf ("so ngay cong: %d\n",ngaycong);
	printf ("Phu cap chuc vu %.0f VND\n ",PhuCap);
	printf ("Tien thuong vuot muc %.0f VND\n",Thuong);
	printf("TONG LUONG PHAI TRA: %.0f VND\n", Luong);
			
			
	
	
	return 0;
}

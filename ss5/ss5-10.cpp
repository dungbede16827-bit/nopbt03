#include <stdio.h>
int main () {
	float soKwh;
	int loaitieuthu;
	float tiendien;
	float tienbacthang=0.0;
	float phuphi;
	printf ("so soKwh tieu thu la ");
	scanf ("%f",&soKwh);
	printf ("loai tieu thu la (1: Ho gia dinh , 2: Ho kinh doanh , 3 : ho sab xuat)");
	scanf ("%d",&loaitieuthu);
	if (soKwh > 0 && soKwh <= 50) {
		tienbacthang=soKwh*1500;
		
	} else if (soKwh <= 100) {
		tienbacthang=50 * 1500 + (soKwh - 50) * 2000;
	} else if (soKwh <= 200) {
		tienbacthang=50 * 1500 + 50 * 2000 + (soKwh - 100) * 2500;
	} else {
		tienbacthang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (soKwh - 200) * 3000;
	} 
	switch (loaitieuthu) {
		case 1:
		phuphi = (tienbacthang)*0.05;
		break;
		case 2:
		phuphi = (tienbacthang)*0.1;
		break;
		case 3:
	
		phuphi = (tienbacthang)*0.08;
		break;
		default:
            printf("Loai ho khong hop le!\n");
            return 1;
		
	}
	tiendien = tienbacthang + phuphi;
	printf ("%d kWh,%d => tien dien = %.3f VND",soKwh,loaitieuthu,tiendien);
	
	return 0;
}

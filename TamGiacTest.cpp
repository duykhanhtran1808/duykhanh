#include <stdio.h>
#include <math.h>

int main() {
	printf("Moi nhap 3 so\n");
	printf("\nSo 1: ");
	int x;
	scanf("%d",&x);
	
	printf("\nSo 2: ");
	int y;
	scanf("%d",&y);
	
	printf("\nSo 3: ");
	int z;   
	scanf("%d",&z);
	
	if((x+y <= z) || (x+z <= y) || (y+z <= x)) {
		printf("Khong phai tam giac");
	} else {
		printf("La tam giac\n");
		double chuvi = (x + y + z);
		double dientich = (chuvi/2) * (chuvi/2 -x) * (chuvi/2 - y) * (chuvi/2 - z);
		dientich = sqrt(dientich);
		
		
		printf("chu vi la %d\n",(int)chuvi);
		printf("dien tich la %lf",dientich);
	}
	return 0;
	}

#include <stdio.h>
int main() {
	double x;
	printf("Moi nhap so: \n");
	scanf("%lf",&x);
	
	if(x >= 0) {
		printf("Day la so duong");
	} else {
		printf("Day la so am");
	}
	
	return 0;
}

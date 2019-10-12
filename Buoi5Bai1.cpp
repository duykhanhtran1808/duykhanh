#include <stdio.h>
int main() {
	double tong;
	int n;
	double phanso;
	printf("Moi nhap n \n");
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		phanso = (double)1/i;
		tong += phanso;
	}
	printf("Tong: %lf",tong);
	
	return 0;
}

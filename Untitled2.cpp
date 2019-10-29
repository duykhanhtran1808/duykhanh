#include <stdio.h>
int main() {
	printf("Tao mang a[n], n = \n");
	int n;
	scanf("%d",&n);
	int arr[n];
	arr[n] = nhapmang();
	timkiem();
	insole();
	sonfibo();
	
	return 0;
}

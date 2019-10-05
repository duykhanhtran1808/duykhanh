#include <stdio.h>
#include <math.h>
int main() {
	double a,b,c;
	printf("Nhap a:");
	scanf("%lf",&a);
	printf("Nhap b:");
	scanf("%lf",&b);
	printf("Nhap c:");
	scanf("%lf",&c);
	printf("Phuong trinh ban nhap la: \n %lfx^2 + %lfx + %lf",a,b,c);
	
	double x1,x2;
	x1 = (-b + sqrt(pow(b,2) - 4 * a * c)) / (2*a);
	x2 = (-b - sqrt(pow(b,2) - 4 * a * c)) / (2*a);
	
	printf("Hai nghiem la: \n x1 = %lf va x2 = %lf",x1,x2);
	return 0;
}

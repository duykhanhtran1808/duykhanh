#include <stdio.h>
int main(){
	int a[10];
	double tb;
	for(int i = 0; i < 10; i++){
		printf("Nhap so thu %d \n",(i+1));
		scanf("%d",&a[i]);
		tb += a[i];
	}
	tb /= (double) 10;
	printf("Gia tri trung binh la = %lf",tb);
	return 0;
}

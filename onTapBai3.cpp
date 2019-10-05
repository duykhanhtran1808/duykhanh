#include <stdio.h>
int main() {
	int x,y;
	printf("Nhap x: ");
	scanf("%d",&x);
	printf("\tx = %d\n",x);
	
	printf("Nhap y: ");
	scanf("%d",&y);
	printf("\ty = %d\n",y);
	
	int temp;
	printf("Xin vui long doi trong choc lat\n");
	temp = x;
	x = y;
	y = temp;
	
	printf("\tx = %d\n",x);
	printf("\ty = %d\n",y);
	return 0;
}

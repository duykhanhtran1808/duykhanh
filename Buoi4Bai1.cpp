#include <stdio.h>
int main() {
	int x,y,z;
	bool tamgiac = false;
	do {
	printf("Nhap 3 canh: \n");
	printf("Nhap canh 1: \n");
	scanf("%d",&x);
	printf("Nhap canh 2: \n");
	scanf("%d",&y);
	printf("Nhap canh 3: \n");
	scanf("%d",&z);
	
	if(x+y>z&&x+z>y&&y+z>x) {
		tamgiac = true;
		printf("La 3 canh tam giac");
	} else {
		printf("==>Chua phai tam giac, nhap lai \n \n");
	}
	} while(!tamgiac);
	return 0;
}

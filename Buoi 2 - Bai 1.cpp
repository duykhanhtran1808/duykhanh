#include <stdio.h>

int main() {
	int x;
	int y;
	int z;
	int caoNhat;
	int thapNhat;
	
	printf("Xin moi nhap so thu 1 (so nguyen)\n");
	scanf("%d",&x);
	printf("Xin moi nhap so thu 2 (so nguyen)\n");
	scanf("%d",&y);
	printf("Xin moi nhap so thu 3 (so nguyen)\n");
	scanf("%d",&z);

	if(x > y) {
		caoNhat = x;
		thapNhat = y;
	} else {
		caoNhat = y;
		thapNhat = x;
	}
	
	if(z > caoNhat) {
		caoNhat = z;
	} else if(z < thapNhat) {
		thapNhat = z;
	}
	
	printf("So lon nhat la %d\n",caoNhat);
	printf("So thap nhat la %d\n",thapNhat);

	return 0;
}

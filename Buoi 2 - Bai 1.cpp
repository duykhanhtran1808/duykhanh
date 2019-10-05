#include <stdio.h>

int main() {
	int x;
	int y;
	int z;
	int caoNhat;
	int thapNhat;
	
	printf("Xin moi nhap 3 so (so nguyen)\n");
	scanf("%d",&x);
	scanf("%d",&y);
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

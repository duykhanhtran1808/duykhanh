#include <stdio.h>

int main() {
	int x,y;
	printf("Moi nhap 2 so\n");
	printf("So dau tien: \n");
	scanf("%d",&x);
	printf("So tiep theo: \n");
	scanf("%d",&y);
	
	if(x>y) {
		printf("So lon nhat: %d",x);
	} else {
		printf("So lon nhat: %d",y);
	}
	
	return 0;
	}

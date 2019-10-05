#include <stdio.h>

int main() {
	int x;
	int y = 0;
	printf("Xin moi nhap so\n");
	scanf("%d",&x);     
	
	while(x != 0) {
		y *= 10; 
		y = y + (x % 10);
		x /= 10;
		}
		
	printf("Nghich dao: %d",y);
	return 0;
	}

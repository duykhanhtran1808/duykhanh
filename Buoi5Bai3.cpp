#include <stdio.h>
int main() {
	int tong;
	int count;
	for(int i = 1; count <= 100; i++){
		
		if(i % 2 != 0) {
			tong += i;
			count++;
		}
	}
	printf("%d",tong);
	return 0;
}
